#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int m,n,k;
    int true=0;
    while(scanf("%llu",&k)!=EOF)
    {
        for(m=100;; m++)
            for(n=100;; n++)
                if((unsigned long long int)pow(k,m)%1000==(unsigned long long int)pow(k,n)%1000)
                {
                    printf("%llu\n",n+m);
                    true=1;
                    break;
                }
                else
                    break;
        if(true==0)printf("No Answer.");
        true=0;
    }
    return 0;
}
