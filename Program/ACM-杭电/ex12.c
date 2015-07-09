#include<stdio.h>
int main()
{
   int i=0,t,n,j,count;
   int sum=0;
   int m[100];

    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&count);
        while(count--)
        {
            scanf("%d",&t);
            sum+=t;
        }
        m[i++]=sum;
        sum=0;
    }
    for(j=0; j<i; j++)
    {
        printf("%d\n",m[j]);
    }

   return 0;
}
