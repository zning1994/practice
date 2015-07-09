#include<stdio.h>
int main()
{
    long long int k;
    while(scanf("%lld",&k)!=EOF)
    {
        if(k==1)
            printf("471\n");
        else
            printf("%lld471\n",k-1);
    }
    return 0;
}
