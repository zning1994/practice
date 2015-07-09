#include<stdio.h>
int is_swapped(int * a, int * b)
{
    int temp,va,vb;
    va=*a;
    vb=*b;
    if(*a==*b)
        return 0;
    if(*a>*b)
        return 1;
    return 0;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if(is_swapped(&a, &b))
        printf("%d %d YES", b, a);
    else
        printf("%d %d NO", a, b);
}
