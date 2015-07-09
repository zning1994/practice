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
    unsigned int num,sum=0;
    int i=0;
    scanf("%u",&num);
    if(num<=12)
    {
        for(i=num; i>=1; i--)
        {
            sum+=fact(i);

        }
        printf("%u\n",sum);
    }
    else
        printf("overflow");

    return 0;
}
