#include <stdio.h>

draw(int n)
{
    int i, j;

    for (i=1; i<=n; ++i)
    {
        for (j=1; j<=i; ++j)
            printf("%d", i);
        putchar('\n');
    }

    for (i=n-1; i>=1; --i)
    {
        for (j=1; j<=i; ++j)
            printf("%d", i);
        putchar('\n');
    }
}
int main(void)
{
    freopen("out","w",stdout);
    int n, i;
    int a, f;

    scanf("%d", &n);
    while (n--)
    {
        scanf("%d%d", &a, &f);
        for (i=1; i<=f; ++i)
        {
            draw(a);
            if (n==0 && i==f)
                return 0;
            putchar('\n');
        }
    }
    return 0;
}
