#include<stdio.h>
int main()
{
    int x,sum,a,b,c,d,e;
    scanf("%d",&x);
    sum=100-x;
    a=sum/20;
    b=(sum-a*20)/10;
    c=(sum-a*20-b*10)/5;
    d=sum-a*20-b*10-c*5;
    printf("$20 bills: %d\n",a);
    printf("$10 bills: %d\n",b);
    printf(" $5 bills: %d\n",c);
    printf(" $1 bills: %d",d);
    return 0;

}
