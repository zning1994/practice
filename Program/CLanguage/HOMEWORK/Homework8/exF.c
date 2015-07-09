#include<stdio.h>
int compare(int *min, int *mid, int *max)
{
    int temp=0;
    if(*min>*mid)
        temp=*min,*min=*mid,*mid=temp;
    if(*min>*max)
        temp=*min,*min=*max,*max=temp;
    if(*mid>*max)
        temp=*mid,*mid=*max,*max=temp;
    return 0;
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    compare(&a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}
