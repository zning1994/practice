#include <stdio.h>
#include <stdlib.h>
int zning(int a, int b, int k)
{
    int zni = 0;
    int tmp,i;
    for (i = a; i <= b; i++)
    {
        tmp = abs(i);
        while (tmp != 0)
        {
            if (tmp % 10 == k)
            {
                zni += i;
                break;
            }

            tmp /= 10;
        }
    }

    return zni;
}

int main()
{
    int a, b, k, m, i, *zni;

    scanf("%d", &m);
    zni = (int *)malloc(sizeof(int) * m);
    i = m;
    while (i > 0)
    {
        scanf("%d %d %d", &a, &b, &k);
        zni[m - i] = zning(a, b, k);
        i--;
    }
    while (i < m)
        printf("%d\n", zni[i++]);
    return 0;
}
