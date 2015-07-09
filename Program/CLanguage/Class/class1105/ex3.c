//菱形输出（3/4个菱形）
#include<stdio.h>
int main()
{
    int a,b,c,i,j,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
            putchar(' ');
        for(j=1; j<=2*i-1; j++)
            putchar('*');
        printf("\n");
    }
    for(i=1; i<=n-1; i++)
    {
        for(j=n-1; j>=n-i; j--)
            putchar(' ');
        for(j=n-1; j>=i; j--)
            putchar('*');
        printf("\n");
    }
    return 0;
}
