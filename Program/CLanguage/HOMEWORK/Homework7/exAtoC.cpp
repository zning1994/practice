#include<stdio.h>
#define Max 10000
int main()
{
    int score[Max],s[Max];
    int n,time,count=0,a,c,b;
    for(int i=0; i<Max; i++)
        score[i]=0;
    for(; scanf("%d",&a)!=EOF; )
    {
        c=a*100;
        score[c]++;
    }
    time=score[0];
    for(int j=1; j<Max; j++)
    {
        if(score[j]>time)
        {
            time=score[j];
            b=j;
        }
    }
    for(int j=0; j<Max; j++)
        if(score[j]==time&&j!=b)
            s[count++]=j;
    printf("%d\n",b/100);
    for(int i=0; i<count; i++)
        printf("%d\n",s[i]/100);
    return 0;
}
