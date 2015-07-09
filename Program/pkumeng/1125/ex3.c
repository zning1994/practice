#include<stdio.h>
#define N 1000
int main()
{
    int n, m, i, num[N], final[N];
    int *p=num;
    int *q=final;
    int move(int n, int m, int *p, int *q);
    printf("你要输入数的总数（<%d）：", N);
    scanf("%d", &n);
    printf("输入%d个数:",n);
    for (i = 0; i < n; i++)
        scanf("%d", p++);
    printf("你想让前面各数各移位数：");
    scanf("%d", &m);
    p=num;
    move(n, m, p, q);
    printf("最后结果为:");
    for (i = 0; i < n; i++)
        printf("%d ", *q++);
    printf("\n End O(∩_∩)O\n");
    return 0;
}
int move(int n, int m, int *p, int *q)
{
    int i=0, j;
    int *i_start=p;
    if (m==0)
    {
        for (i=0; i<n; i++)
            *q++=*p++;
        return 0;
    }
    for (j = n - m,p=p+j; j < n; j++)
        *q++ = *p++;
    p=i_start;
    for (j = 0; j < n-m; j++)
        *q++=*p++;
    return 0;
}
