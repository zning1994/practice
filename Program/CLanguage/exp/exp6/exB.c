#include<stdio.h>
int maxValue(int a,int b,int c)
{
int max=0;
    max=a;
    if(max<=b)
        max=b;
    if(max<=c)
        max=c;
    return max;
}
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d", maxValue(x, y, z));
    return 0;
}
