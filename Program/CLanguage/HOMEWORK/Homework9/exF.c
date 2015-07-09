#include<stdio.h>
//定义结构体，进行存储数据
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
    //M为用户总数，N为题目个数
    INF user[M];
    //进行数据输入：依行输入
    for(i=0; i<M; i++)
    {
        scanf("%s",user[i].name);
        for(j=0; j<N; j++)
            scanf(" %c",&user[i].choice[j]);
        scanf("%d",&user[i].num);
    }
    //进行模式匹配：按照题目所要求条件进行模式匹配
    for(i=0; i<M; i++)
    {
        printf("%-9.20s:",user[i].name);
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
