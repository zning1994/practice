#include<stdio.h>
int main()
{
    int a,b,n,ac;
    for(;scanf("%d",&n)!=EOF;)
    {
        b=0;
        for(ac=1;ac<=n;ac++)
           {scanf("%d",&a);
            b=b+a;
            }
            printf("%d\n",b);
    }
    return 0;
}
