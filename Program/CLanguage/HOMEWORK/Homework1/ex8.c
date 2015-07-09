#include<stdio.h>
int main()
{
    int m,n,x,a;
    double total;
    scanf("%d%d%d",&m,&n,&x);
    a=m*x;
    if(a>=n)
        total=m*x*0.88;
    else
        total=a;
    printf("%.2lf",total);
    return 0;

}
