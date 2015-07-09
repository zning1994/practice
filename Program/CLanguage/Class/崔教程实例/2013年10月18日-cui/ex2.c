#include<stdio.h>
int main()
{
    int i=0,n,sum;
    double ave=0;
    while(scanf("%d",&n)!=0)
    {
        sum+=n;
        i++;

    }
    ave=(double)sum/i;
    printf("%lf",ave);
    return 0;
}
