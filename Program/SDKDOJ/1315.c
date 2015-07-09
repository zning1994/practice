#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int rp,m,n;
    while(scanf("%llu%llu%llu",&rp,&m,&n)!=EOF)
    {
        //printf("%lf",pow(rp%n,m));
        printf("%llu\n",(((unsigned long long int)pow(rp%n,m))));
    }
    return 0;
}
