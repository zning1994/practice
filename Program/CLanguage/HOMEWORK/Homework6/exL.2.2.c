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
    unsigned long long int true=0;
    unsigned long long int n,time,count=0,a,c,b,i,j,N;
    for(i=0; i<Max; i++)
        score[i]=-1;
    scanf("%lld",&N);
    for(; N>0; )
    {
        scanf("%llu",&a);
        c=a;
        score[c]++;
        true=1;
        N--;
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

    printf("%llu\n",count);
    return 0;
}
