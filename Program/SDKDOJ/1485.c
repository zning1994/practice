#include<stdio.h>
int main()
{
    int n,sum=0,a;
    while(scanf("%d",&n)!=EOF)
    {
        while(n>0)
        {
            scanf("%d",&a);
            sum+=a;
            n--;
        }
        printf("%g\n",((double)sum*0.5));
        sum=0;
    }
    return 0;
}
