#include <stdio.h>
int main()
{
    int n,i,j,a;
    scanf("%d",&n);
    scanf("%d",&a);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n-i;j++)
            putchar(' ');
        for (j=1;j<=2*i-1;j++)
            putchar('0'+(a+i+j-2)%10);
        putchar('\n');
    }
    return 0;
}
