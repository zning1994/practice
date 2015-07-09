#include<stdio.h>
int main()
{
    int n,m,a,b,c,sum=0,total=0;
    scanf("%d",&m);
    while(m>0)
    {
        scanf("%d",&n);
        while(n>0)
        {
            scanf("%d%d%d",&a,&b,&c);
            sum+=a*c;
            n--;
        }
        printf("%d\n",sum);
        sum=0;
        m--;
    }
    return 0;
}
