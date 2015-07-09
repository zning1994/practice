#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d",&i);
    long sum,n;
    for(sum=0;i<=14;i+=2)
    {
        for(n=1,j=2;j<=i;j+=2)
        {
            n*=j;
        }
            sum+=n;
    }
    printf("%ld\n",sum);
    return 0;
}
