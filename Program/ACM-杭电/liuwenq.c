#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Please input three numders:");
    scanf("%d%d%d",&a,&b,&c);
    a=a>b?a:b;
    a=a>c?a:c;
    printf("%d",a);

    return 0;
}
