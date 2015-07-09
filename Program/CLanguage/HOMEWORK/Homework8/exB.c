#include<stdio.h>
int add(int n)
{
    static int a=0;
    a=a+n;
    return a;
}
int main()
{
    int min, max, sum;
    scanf("%d%d", &min, &max);
    while(min <= max)
        sum = add(min++);
    printf("%d", sum);
    return 0;
}
