#include<stdio.h>
//����ṹ�壬���д洢����
typedef struct
{
    char name[30];
    char choice[30];
    int num;
} INF;
//Start MAIN function.
int main()
{
    int M,N,i,j,cou=0,x=0,true=0,count=0;
    scanf("%d%d",&M,&N);
    //MΪ�û�������NΪ��Ŀ����
    INF user[M];
    //�����������룺��������
    for(i=0; i<M; i++)
    {
        scanf("%s",user[i].name);
        for(j=0; j<N; j++)
            scanf(" %c",&user[i].choice[j]);
        scanf("%d",&user[i].num);
    }
    //����ģʽƥ�䣺������Ŀ��Ҫ����������ģʽƥ��
    for(i=0; i<M; i++)
    {
        printf("%-9.20s:",user[i].name);
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
                    printf("%s,",user[x].name);
                    true=1;
                }
                cou=0,count=0;
            }
        }
        if(true==0)
            printf("NONE!");
        printf("\n");
        cou=0,true=0;
    }
    return 0;
}
