#include<stdio.h>
#include<string.h>
//����ṹ�壬���д洢����
typedef struct
{
    char name[30];
    int len;
    char choice[30];
    int judge[110];
    int num;
} INF;
//Start MAIN function.
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int M,N,i,j,k,cou=0,x=0,true=0,count=0,maxlen=0,prcou=0,p=0,temp;
    scanf("%d%d",&M,&N);
    //MΪ�û�������NΪ��Ŀ����
    INF user[M+10];
    //�����������룺��������
    for(i=0; i<M; i++)
    {
        scanf("%s",user[i].name);
        user[i].len=strlen(user[i].name);
        for(j=0; j<N; j++)
            scanf(" %c",&user[i].choice[j]);
        scanf("%d",&user[i].num);
    }
    //�����ַ�����������ѡ�����ġ�
    maxlen=user[0].len;
    for(i=1; i<M; i++)
    {
        if(maxlen<user[i].len)
            maxlen=user[i].len;
    }
    //����ģʽƥ�䣺������Ŀ��Ҫ����������ģʽƥ��
    for(i=0; i<M; i++)
    {
        printf("%s",user[i].name);
        if(maxlen-user[i].len!=0)
        {
            for(k=maxlen-user[i].len; k>0; k--)printf(" ");
        }
        printf(":");
        for(x=0; x<M; x++)
        {
            if(x!=i)
            {
                //���е�ǰ�û�������ĳһ�û���ƥ�����
                for(j=0; j<N; j++)
                {
                    if(user[i].choice[j]==user[x].choice[j])
                        cou++;
                }
                //�������Ϊ������������������true��ֵΪ1����ΪNONE�ж�ʹ��
                if(cou>=user[i].num)
                {
                    user[i].judge[p++]=x;
                    true=1;
                }
                cou=0,count=0;
            }
        }
        //�������
        if(true==0)
        printf("NONE!");
        else
        {
            for(k=0; k<p; k++)
            {
                temp=user[i].judge[k];
                if(k==0)
                    printf("%s",user[temp].name);
                else if(k!=0)
                    printf(",%s",user[temp].name);
            }
        }
        printf("\n");
        cou=0,true=0,p=0;
    }
    return 0;
}
