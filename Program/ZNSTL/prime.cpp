#include <iostream>
#include <cstdio>
int gcd(int a,int b)
{
    int temp;
    if(a>b){temp=a;a=b;b=temp;}
    if(a==0)return b;
    else return gcd(b%a,a);
}
//#include "zning.h"
int Pollard(int n,int x)
{
    int i,d,k=2,y=x;
    for(i=1;i<n;i++)
    {
        x=(x*x-1)%n;
        d=gcd(y-x,n);
        if(d!=1&&d!=n)return d;
        if(i==k)y=x,k=2*k;
    }
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",Pollard(a,b));
    return 0;
}
