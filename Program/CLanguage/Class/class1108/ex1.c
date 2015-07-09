#include<stdio.h>
#define N 10000
int main()
{
    int n,i=0,sum=0;
    scanf("%d",&n);
    int a[n],b,c;
    while(i<=n-1)
    {
        scanf("%d",&b);
        a[i]=b;
        sum+=a[i];
        i++;
    }
    printf("The added is %d\n",sum);
    return 0;
}
