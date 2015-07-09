#include<stdio.h>
int main ()
{
    int n,i,j,c,k;
    scanf("%d",&n);
    if(n%2!=0)
    {
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n-i+1;j++)
            putchar(' ');
        for(c=1;c<=i;c++)
            printf("%d",c);
        for(c=i-1;c>=1;c--)
            printf("%d",c);
            printf("\n");
    }
        for(i=n-1;i>=1;i--)
    {
        for(j=1;j<n-i+1;j++)
            putchar(' ');
        for(c=1;c<=i;c++)
            printf("%d",c);
        for(c=i-1;c>=1;c--)
            printf("%d",c);
            printf("\n");
    }
    }
    else
    {
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n-i+1;j++)
            putchar(' ');
        for(c=1;c<=i;c++)
            printf("%d",c);
        for(c=i-1;c>=1;c--)
            printf("%d",c);
            printf("\n");
    }
        for(i=n-1;i>=1;i--)
    {
        for(j=1;j<n-i+1;j++)
            putchar(' ');
        for(c=1;c<=i;c++)
            printf("%d",c);
        for(c=i-1;c>=1;c--)
            printf("%d",c);
            printf("\n");
    }
    }

}
