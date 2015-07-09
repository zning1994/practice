#include<stdio.h>
int main()
{
    int a,c;
    double b,d;
    scanf("%d",&a);
    scanf("%lf",&b);
    c=a>0?a:0-a;
    d=b>0?b:0-b;
    printf("%d\n%g",c,d);
    return 0;
}
