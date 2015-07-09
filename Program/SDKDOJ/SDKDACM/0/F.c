#include<stdio.h>
int main()
{
    int i,j;
    long n;
    scanf("%d",&i);
    for(n=1,j=1;j<=i;j+=2)
    {
        n*=j;
    }
    printf("%d",n);
    return 0;
}
