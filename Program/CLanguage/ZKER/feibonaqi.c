#include<stdio.h>
#define p 46//最大为46,47溢出
unsigned long long int a[p]={1,1};
int main()
{
    unsigned long long int i;
    for(i=2;i<=p;i++)
        a[i]=a[i-1]+a[i-2];
    for(i=0;i<p;i++)
        printf("%d ",a[i]);
}//斐波那契数列
