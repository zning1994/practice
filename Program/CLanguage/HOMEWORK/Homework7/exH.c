#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//��a����b��b����aû������������b��a�ı�����a��b��Լ��������Ҫ��b��Ϊ0�����0�����������ı�����������������0��Լ����������0������Լ����
int gcd(int a,int b)
{
    int c,t;
    if(b>a)
        t=b,b=a,a=t;
    c=b%a;
    while(c!=0)
    {
        b=a,a=c,c=b%a;
    }
    return a;
}
int lcm(int a,int b)
{
    int comble,d,t;
    if(b==0)
        return 0;
    if(a==0)
        return 0;
    comble=a*b;
    if(b>a)
        t=b,b=a,a=t;
    d=b%a;
    while(d!=0)
    {
        b=a,a=d,d=b%a;
    }
    return (comble/a);
}
int main()
{
    int a, b;
#ifndef ONLINE_JUDGE
    freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout);
#endif
    while(scanf("%d %d", &a, &b) != EOF)
        printf("%d %d\n", gcd(a, b), lcm(a, b));
    return 0;
}
