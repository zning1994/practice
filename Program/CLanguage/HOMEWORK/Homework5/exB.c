#include<stdio.h>
void main()
{
    int i,j;
    int a[9] = {2,3,4,5,6,7,8,9,10};
    for (i = 0; i < 8; ++i)
    {
        if (a[i] != -1)
        {
            for (j = i+1; j < 9; ++j)
            {
                if (a[j]%a[i] == 0)
                {
                    a[j] = -1;
                }
            }
        }
    }
    printf("筛选后剩下的素数为:\n");
    for (i = 0; i < 9; ++i)
        if (a[i]!=-1) printf("%d\n", a[i]);
}
