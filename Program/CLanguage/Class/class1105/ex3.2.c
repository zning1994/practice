//菱形输出（完整版）
#include<stdio.h>
int main()
{
    int a,b,c,i,j,n;
    scanf("%d",&n);
    //输出上半部分
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
            putchar(' ');
        for(j=1; j<=2*i-1; j++)
            printf("%d",j);
        printf("\n");
    }
    //输出下半部分
    for(i=i-2; i>=0; i--)
    {
        for(j=1; j<=n-i; j++)
            putchar(' ');
        for(j=1; j<=2*i-1; j++)
            printf("%d",j);
        printf("\n");
    }
    return 0;
}
