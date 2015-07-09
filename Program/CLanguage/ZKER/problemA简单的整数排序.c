#include<stdio.h>
int main()
{
    int n,i,j,c,d;
    scanf("%d",&n);
    int a[n-1];
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
        for(j=1; j<n; j++)
        {
            for(i=0;i<n-j;i++)
            if(a[i]>a[i+1])
        {
            d=a[i+1];
            a[i+1]=a[i];
            a[i]=d;
        }
        }
        i=0;
        printf("%d",a[i]);
       for(i=1; i<n; i++)
        printf(" %d",a[i]);
}




