#ifndef ZNING_H_INCLUDED
#define ZNING_H_INCLUDED
#include <cmath>
#include <cstdio>
#include <iostream>
#include "zning.h"
#define MAX 20000
using namespace std;
int primearray[MAX];
void prime_simple(int n)
{
    int num = 0,i,j;
    for(i=2; i<=n; i++)
    {
        for(j=2; j<=sqrt(i); j++)
            if( j%i==0 ) break;
        if( j>sqrt(i) ) primearray[num++] = i;  //这个prime[]是int型，跟下面讲的不同。
    }
    for(i=0; i<=num; i++)
        cout<<primearray[i]<<endl;
}
void prime_search(int range)
{
    bool IsPrime[range+1];
    int i,j;
    for(i=0; i<=range; ++i)
        IsPrime[i]=true;
    IsPrime[0]=IsPrime[1]=false;
    for(i=2; i<=range; ++i)
        if(IsPrime[i])
            for(j=2*i; j<=range; j+=i)
                IsPrime[j]=false;
    for(i=2;i<=range;i++)
        if(IsPrime[i])
            cout<<i<<endl;
}
int gcd(int a,int b)
{
    int temp;
    if(a>b){temp=a;a=b;b=temp;}
    if(a==0)return b;
    else return gcd(b%a,a);
}
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
#endif // ZNING_H_INCLUDED
