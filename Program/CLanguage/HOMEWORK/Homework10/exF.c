#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
    int score[10];//选手的10个得分，得分与评委一一对应
    double aver;//选手的平均分
    char name[81];//选手的姓名
} Choice;
void swap(char *a,char *b)
{
    char c[81];
    strcpy(c, a);
    strcpy(a, b);
    strcpy(b, c);
}
int inputChoice(Choice peo[],int M,int N)
{
    int i,j;
    for(j=0; j<M; j++)
    {
        scanf("%s",&peo[j].name);
        for(i=0; i<N; i++)
            scanf("%d",&peo[j].score[i]);
    }
    return 0;
}
int sort(Choice peo[],int M,int N)
{
    int i,j,k,temp=0,sum=0;
    double temp1=0;
    //First:gulugulu
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
    //Second:caclulate the score
    for(k=0; k<M; k++)
    {
        for(i=1; i<N-1; i++)
            sum+=peo[k].score[i];
        //Third: caclulate the average.
        peo[k].aver=(double)sum/(N-2);
        sum=0;
    }
    //Fourth: average gulugulu.
    for(i=1; i<N; i++)
        for(j=0; j<N-i; j++)
            if(peo[j].aver<peo[j+1].aver)
            {
                swap(peo[j].name, peo[j+1].name);
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
