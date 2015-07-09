#include<stdio.h>
int main()
{
    int m,n,x;
    scanf("%d%d%d",&m,&n,&x);
    if(m*x>=n)
        printf("%.2lf",0.88*m*x);
    else
        printf("%d",m*x);
    return 0;
}
