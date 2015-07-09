#include <stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    for( i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
            putchar(' ');
        for(j=1; j<=i; j++)
            printf("%d",j);
        printf("\n");

    }
    for(j=j-2; j>=1; j--)
    {
        for(j=1; j<=n-i; j++)
            putchar(' ');
        for(j=1; j<=i; j++)
            printf("%d",j);
        printf("\n");
    }
}
