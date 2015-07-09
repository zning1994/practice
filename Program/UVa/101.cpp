//�ܷ���һ��ģ���⣬�����ҵ������ݷ�����С��������ac���
//����Ĳ��迴���˵ģ�
//�C���ֱ������׷N�Ϸ���eľ�ķ�ʽ��a��b�Ƿeľ�ľ�̖����
//move a onto b
// �ڌ�a�ᵽb��֮ǰ���Ȍ�a��b�ϵķeľ�Ż�ԭ���λ�ã����磺1�ͷŻ�1�����_ʼλ�D��
//move a over b
// �ڌ�a�ᵽb���ڵ��Ƕѷeľ֮��֮ǰ���Ȍ�a�ϵķeľ�Ż�ԭ���λ�D��b���ڵ��Ƕѷeľ���ӣ�
//pile a onto b
// ��a��������ϵķeľһ��ŵ�b�ϣ��ڰ�֮ǰb�Ϸ��ķeľ�Ż�ԭλ
//pile a over b
// ��a��������ϵķeľһ��ᵽ��b���ڵ��Ƕѷeľ֮��
//quit
// �����Y��
//ǰ�Ă���������a=b������a, b��ͬһ�ѷeľ�У����N�@�ӵĄ������ǲ��Ϸ��ġ����в��Ϸ��Ą�����ԓ�����ԣ�Ҳ���ǌ����eľ���o��׃
//
//�ܽ�������ʵֻ�����ֲ�����
//1.��һ����ľ�ϵ����л�ľ�Ż�ԭλ
//2ֻ��һ����ľ�ƶ�����һ����ľ��
//3�������ľ�������ϵĻ�ľ�ƶ�����һ����ľ��
//���ֲ����Ĳ�ͬ��Ͽ���ʵ����ĿҪ������ֲ���Ҫ��
//һ�������¼ÿ����ľ��ǰ��λ�÷������
//�ýṹ���¼��ǰ���л�ľ��λ�ù�ϵ��������
//�鷳����ÿ�β�����Ҫ�ı�ܶ������
//�ڶ����ƶ���ʽ���ܻ����Ҫ�ƶ��Ļ�ľ���м䣬��Ҫ��������Ļ�ľ���ƣ��������������ʼû���ǵ�runtime error ������
//�����ҵ������ݷ����˴���
//21
//move 2 onto 1
//move 3 onto 2
//move 4 onto 3
//move 5 over 1
//pile 1 over 10
//move 9 over 8
//move 11 over 8
//pile 3 over 8
//pile 8 over 3
//move 20 over 19
//pile 19 over 18
//pile 18 onto 15
//move 15 over 3
//pile 20 onto 19
//pile 19 onto 18
//pile 18 over 17
//quit
//0: 0
//1:
//2:
//3:
//4:
//5:
//6: 6
//7: 7
//8: 8 9 11 3 4 5 15
//9:
//10: 10 1 2
//11:
//12: 12
//13: 13
//14: 14
//15:
//16: 16
//17: 17 18 19 20
//18:
//19:
//20:
#include <stdio.h>
#include <string.h>
struct node
{
    int num,block[30];
} a[30];
int postion[30];
void turnback(int x)
{
    int i,j,pos,t=postion[x],T,s=0;
    for (i=1; i<=a[t].num; i++)
        if (a[t].block[i]==x)
        {
            pos=i;
            break;
        }
    for (i=pos+1; i<=a[t].num; i++)
    {
        T=a[t].block[i];
        ++a[T].num;
        ++s;
        for (j=a[T].num; j>=2; j--)
            a[T].block[j]=a[T].block[j-1];
        a[T].block[1]=T;
        postion[T]=T;
    }
    a[t].num=a[t].num-s;
};
void move1(int x,int y)
{
    int i,pos,t=postion[x],T=postion[y];
    ++a[T].num;
    a[T].block[a[T].num]=x;
    for (i=1; i<=a[t].num; i++)
        if (a[t].block[i]==x)
        {
            pos=i;
            break;
        }
    for (i=pos; i<a[t].num; i++)
        a[t].block[i]=a[t].block[i+1];
    --a[t].num;
    postion[x]=postion[y];
}
void move2(int x,int y)
{
    int i,pos,t=postion[x],T=postion[y],s=0;
    for (i=1; i<=a[t].num; i++)
        if (a[t].block[i]==x)
        {
            pos=i;
            break;
        }
    for (i=pos; i<=a[t].num; i++)
    {
        ++a[T].num;
        ++s;
        a[T].block[a[T].num]=a[t].block[i];
        postion[a[t].block[i]]=T;
    }
    a[t].num=a[t].num-s;
};
int main()
{
    char s[30],s1[30];
    int i,j,n,x,y;
    while (scanf("%d",&n)!=EOF)
    {
        for (i=0; i<n; i++)
        {
            a[i].num=1;
            a[i].block[1]=i;
            postion[i]=i;
        }
        while (scanf("%s",&s))
        {
            if (strcmp(s,"quit")==0) break;
            scanf("%d%s%d",&x,&s1,&y);
            if ((postion[x]!=postion[y])&&(x!=y))
            {
                if ((strcmp(s,"move")==0)&&(strcmp(s1,"onto")==0))
                {
                    turnback(x);
                    turnback(y);
                    move1(x,y);
                }
                if ((strcmp(s,"move")==0)&&(strcmp(s1,"over")==0))
                {
                    turnback(x);
                    move1(x,y);
                }
                if ((strcmp(s,"pile")==0)&&(strcmp(s1,"onto")==0))
                {
                    turnback(y);
                    move2(x,y);
                }
                if ((strcmp(s,"pile")==0)&&(strcmp(s1,"over")==0))
                {
                    move2(x,y);
                }
            }
        }
        for (i=0; i<n; i++)
        {
            printf("%d:",i);
            for (j=1; j<=a[i].num; j++)
                printf(" %d",a[i].block[j]);
            printf("\n");
        }
    }
    return 0;
}
