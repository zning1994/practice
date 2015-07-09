#include <stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    k=(n+1)/2;
    for (i=1;i<=k;i++)
    {
        for (j=1;j<=k-i;j++)
            putchar(' ');
        for (j=1;j<=2*i-1;j++)
            putchar('*');
        putchar('\n');
    }

    for (i=k-1;i>=1;i--)
    {
        for (j=1;j<=k-i;j++)
            putchar(' ');
        for (j=1;j<=2*i-1;j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}
