#include<stdio.h>
int main()
{
    int n,i,j,c,d;
    scanf("%d",&n);
    int a[n-1],b[n-1];
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    while(scanf("%d",&j)!=EOF)
    {
        c=0;
        for (i=0; i<n; i++)
        {
            if(j==a[i])
            {
                b[c]=i+1;
                c++;
            }
        }
        if(c==0)
            printf("NOT FOUND");
        else
        {
            d=0;
            printf("%d",b[d]);
            for (d=1; d<c; d++)
                printf(" %d",b[d]);
        }
        printf("\n");
    }
}
