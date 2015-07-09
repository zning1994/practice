#include<stdio.h>
//#define ONLINE_JUDGE
int compare(int *min, int *mid, int *max)
{
    int temp;
    if(*min>*mid)
    {
        temp=*min;
        *min=*mid;
        *mid=temp;
    }
    if(*min>*max)
    {
        temp=*min;
        *min=*max;
        *max=temp;
    }
    if(*mid>*max)
    {
        temp=*mid;
        *mid=*max;
        *max=temp;
    }
    return 0;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    compare(&a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}
