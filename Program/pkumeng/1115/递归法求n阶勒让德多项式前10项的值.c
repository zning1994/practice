//1. 递归法求n阶勒让德多项式前10项的值，
// Pn(x) =
//              1    (n=0);
//         x    (n=1);
//              ((2n-1)xPn-1(x)-(n-1)Pn-2(x))/n
#include<stdio.h>
long long pn(long long n, long long x)
{
    long long s;
    if(n==0)
        s=1;
    else if(n==1)
        s=x;
    else
        s=((2*n-1)*x*pn(n-1,x)-(n-1)*pn(n-2,x))/n;
    return s;
}
int main()
{
    long long x,sum=0;
    long long i=0;
    printf("请输入Pn(x)中x的值：");
    scanf("%lld",&x);
        for(; i<=10; i++)
        {
            printf("%lld\n",pn(i,x));
        }
    return 0;
}
