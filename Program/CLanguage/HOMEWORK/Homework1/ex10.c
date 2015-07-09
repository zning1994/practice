#include<stdio.h>
int main()
{
    int num,a,b,c,d,e;
    scanf("%d",&num);
    a=num%10;
    c=num/100;
    b=num/10-c*10;
    d=a*a*a+b*b*b+c*c*c;
    printf(d==num?"YES":"NO");
    return 0;

}
