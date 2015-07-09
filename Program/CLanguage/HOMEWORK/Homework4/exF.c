#include<stdio.h>
int main()
{
    long long int k,i;
    //freopen("inF00.txt","r",stdin);
   // freopen("outF00.txt","w",stdout);
    while(scanf("%lld",&k)!=EOF)
    {
        printf("%lld\n",(k-1)*1000+471);
    }
    return 0;
}
