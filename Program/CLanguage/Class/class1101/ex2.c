#include<stdio.h>
int main()
{
    long long int d,a;
    scanf("%lld",&d);
    if(d>0)
    {
        while(d>0)
        {
            a=d%10;
            d=d/10;
            printf("%lld\n",a);
        }
    }
    else if(d<0)
    {
        while(d<0)
        {
            a=d%10;
            d=d/10;
            printf("%lld\n",a);
        }
    }
    else
        printf("%lld",d);
    return 0;
}
