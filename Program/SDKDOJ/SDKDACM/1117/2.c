#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("%lf\n",(double)2147483648.0/i);
    }
    return 0;
}
