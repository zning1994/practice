#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    while(scanf("%d",&j)!=EOF)
    {

       if(j>0&&j<=n)
            printf("%d\n",a[j-1]);
        else if(j<0&&j>=-n)
            printf("%d\n",a[n+j]);
        else
            printf("OUT OF RANGE\n");
    }
}
