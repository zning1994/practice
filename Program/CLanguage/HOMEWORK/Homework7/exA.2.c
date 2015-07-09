#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define Max 200000
unsigned long long int score[Max],s[Max];
int main()
{
//    freopen("test.in","r",stdin);
    //    freopen("test.out","w",stdout);
    unsigned long long int score[Max],s[Max],true=0;
    unsigned long long int n,time,count=0,a,c,b,i,j;
    for(i=0; i<Max; i++)
        score[i]=-1;

    for(; scanf("%llu",&a)!=EOF; )
    {
        if(a<=100&&a>=0)
        {
            c=a;
            score[c]++;
            true=1;
        }
    }
    time=score[0];
    for(j=1; j<Max; j++)
    {
        if(score[j]>time)
        {
            time=score[j];
            b=j;
        }
    }
    for(j=0; j<Max; j++)
        if(score[j]==time&&j!=b)
        {
            s[count++]=j;
        }
    if(true==0)
    {
        for(i=0; i<=100; i++)
            printf("%d\n",i);
    }
    else
    {
        if(b<1000000000)
        printf("%llu\n",b);
        for(i=0; i<count; i++)
            printf("%llu\n",s[i]);
    }
    return 0;
}
