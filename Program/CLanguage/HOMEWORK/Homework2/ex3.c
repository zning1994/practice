#include<stdio.h>
#include<stdlib.h>
int main()
{
    unsigned long long int n,s=0;
    scanf("%llu",&n);
    if(n%2==0)
        s=n/2*(n+1);
    else
        s=(n+1)/2*n;
    printf("%llu",s);
    return 0;
}
