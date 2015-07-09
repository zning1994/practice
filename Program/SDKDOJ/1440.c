#include<stdio.h>
int main()
{
    int T;
    unsigned long long int n,i;
    double sum=0,sum1=0,sum2=0;
    scanf("%d",&T);
    while(T>0)
    {
        scanf("%llu",&n);
        if(i%2!=0)
        {
            for(i=1; i<=n; i++)
                sum1+=1/(double)i;
            for(i=2; i<n; i++)
                sum2-=1/(double)i;
        }
        else
        {
            for(i=1; i<n; i++)
                sum1+=1/(double)i;
            for(i=2; i<=n; i++)
                sum2-=1/(double)i;
        }
        printf("%3.2lf\n",sum1+sum2);
        sum=0,sum1=0,sum2=0;
        T--;
    }
    return 0;
}
