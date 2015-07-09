#include<stdio.h>
int get_int_sum(int *a, int *b)
{
    int c,d;
    scanf("%d%d",&c,&d);
    *a=c,*b=d;
    return c+d;
}
int main()
{
    int n, a, b, i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("%d = ", get_int_sum(&a, &b));
        printf("%d + %d\n", a, b);

    }
    return 0;
}
