#include<stdio.h>
long fact(long n)
{
    if (n==0||n==1)
        return 1;
    else
    {
        return (n*fact(n-2));
    }


}
int main()
{
    long int n;
    while (scanf("%u",&n)!=EOF)
    printf("%u\n",fact(n));

}
