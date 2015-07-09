#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
    int score[200];//选手的10个得分，得分与评委一一对应
    double aver;//选手的平均分
    char name[100];//选手的姓名
} Choice;
int inputChoice(Choice peo[],int M,int N)
{
    int i,j;
    for(j=0; j<M; j++)
    {
        scanf("%s",peo[j].name);
        for(i=0; i<N; i++)
            scanf("%d",&peo[j].score[i]);
    }
    return 0;
}
int sort(Choice peo[],int M,int N)
{
    int i,j,k,temp=0,sum=0;
    char str[200];
    double temp1;
    //First: 冒泡排序，每位选手的分数由大到小进行排序
    for(k=0; k<M; k++)
    {
        for(i=1; i<N; i++)
            for(j=0; j<N-i; j++)
                if(peo[k].score[j]<peo[k].score[j+1])
                {
                    temp=peo[k].score[j];
                    peo[k].score[j]=peo[k].score[j+1];
                    peo[k].score[j+1]=temp;
                }
    }
    //Second: 计算加和（已注意去掉最低分和最高分这个问题）
    for(k=0; k<M; k++)
    {
        for(i=1; i<N-1; i++)
            sum+=peo[k].score[i];//难道是精度问题？？？？？
        //之前的sum是int,在下面进行了数据类型的转换结果仍然WA。
        //Third: 计算平均分（已注意有效评委数的问题）
        peo[k].aver=(double)sum/(N-2);
        sum=0;
    }
    //Fourth: 对平均数进行排序（冒泡），同时对字符串进行置换
    for(i=1; i<N; i++)
        for(j=0; j<N-i; j++)
            if(peo[j].aver<peo[j+1].aver)
            {
                strcpy(str, peo[j].name);
                strcpy(peo[j].name, peo[j+1].name);
                strcpy(peo[j+1].name, str);
                temp1=peo[j].aver;
                peo[j].aver=peo[j+1].aver;
                peo[j+1].aver=temp1;
            }
    return 0;
}
int main()
{
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    Choice peoples[30];
    int M,N,i;
    scanf("%d%d",&M,&N);
    inputChoice(peoples,M,N);
    sort(peoples,M,N);
    for (i=0; i<3; i++)
        printf("%s %.2lf\n",peoples[i].name,peoples[i].aver);
    return 0;
}
