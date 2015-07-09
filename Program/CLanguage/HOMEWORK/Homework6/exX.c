#include<stdio.h>
int main()
{
    int i, j, c, m, n, x, b[100][100], y, a[100][100];
    scanf("%d", &m);
    for (c = 1; c <= m; c++)
    {
        scanf("%d%d", &x, &y);
        for (i = 0; i < x; i++)
            for (j = 0; j < y; j++)
            {
                scanf("%d", &a[i][j]);
                b[j][i] = a[i][j];
            }
        if (c == 1)
        {
            for (i = 0; i < y; i++)
            {
                for (j = 0; j < x; j++)
                {
                    if (j == 0)
                        printf("%d", b[i][j]);
                    else
                        printf(" %d", b[i][j]);
                }
                putchar('\n');
            }
        }
        else
        {
            putchar('\n');
            for (i = 0; i < y; i++)
            {
                for (j = 0; j < x; j++)
                {
                    if (j == 0)
                        printf("%d", b[i][j]);
                    else
                        printf(" %d", b[i][j]);
                }
                putchar('\n');
            }
        }
    }
}
