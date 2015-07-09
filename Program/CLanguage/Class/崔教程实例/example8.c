#include<stdio.h>
int main()
{
    int a=3,y;
    y=(a++)+(a++)+(a++);
    printf("%d %d",a,y);
    return 0;
}
