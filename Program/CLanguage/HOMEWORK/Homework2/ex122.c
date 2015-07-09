#include <stdio.h>
int main()
{
    int a,b,i,n,max,min;
    scanf("%d%d",&n,&a);
    for(i=2,max=a,min=a;i<=n;i++)
    {
        scanf("%d",&b);
        if(b>=max)
            max=b;
        if(b<=min)
            min=b;
    }
    printf("The maximum number is %d.\n",max);
    printf("The minimum number is %d.",min);
    return 0;
}
