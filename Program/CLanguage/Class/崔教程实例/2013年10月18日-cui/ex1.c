#include<stdio.h>
int main()
{
    int N,i=1,sum=0;
    double ave=0;
    scanf("%d",&N);
    while(i<=N)
    {
        i++;
        sum+=i;
        //i++;
    }
    ave=(double)sum/N;
    printf("%lf",ave);
    return 0;
}
