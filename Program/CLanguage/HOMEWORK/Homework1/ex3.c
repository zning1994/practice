#include<stdio.h>
int main()
{
    int a,b,c;
    double d;
    scanf("%d%d%d",&a,&b,&c);
    d=(double)(a+b+c)/3;
    printf("%.3lf",d);
    return 0;
}
