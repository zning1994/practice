#include<stdio.h>
#include<string.h>
//定义结构体，进行存储数据
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
    //M为用户总数，N为题目个数
    INF user[M+10];
    //进行数据输入：依行输入
    for(i=0; i<M; i++)
    {
        scanf("%s",user[i].name);
        user[i].len=strlen(user[i].name);
        for(j=0; j<N; j++)
            scanf(" %c",&user[i].choice[j]);
        scanf("%d",&user[i].num);
    }
    //进行字符串长度排序，选出最大的。
    maxlen=user[0].len;
    for(i=1; i<M; i++)
    {
        if(maxlen<user[i].len)
            maxlen=user[i].len;
    }
    //进行模式匹配：按照题目所要求条件进行模式匹配
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
                //进行当前用户与其他某一用户的匹配计算
                for(j=0; j<N; j++)
                {
                    if(user[i].choice[j]==user[x].choice[j])
                        cou++;
                }
                //如果条件为真就输出其姓名，并将true赋值为1，作为NONE判断使用
                if(cou>=user[i].num)
                {
                    user[i].judge[p++]=x;
                    true=1;
                }
                cou=0,count=0;
            }
        }
        //输出部分
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
