#include<stdio.h>
unsigned int fact(unsigned int n)
{
    unsigned int s;
    if(n<=1)
        s=1;
    else
        s=n*fact(n-1);
    return s;
}
int main()
{
    unsigned int num;
    while (scanf("%u",&num)!=EOF)
    {
    printf("%u\n",fact(num));
    }
    return 0;
}
