#include<stdio.h>
int mian()
{
    int n,a,b,c;
    c=1;
    b=1;
    while (scanf("%d",&n)!=0)
        if(c<=n)
    {scanf("%d",&a);
        b=b>=a?b:a;
        c++;
    }
    printf("%d",b);
    return 0;
}
