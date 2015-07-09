#include<stdio.h>
int main()
{
    int n,i,j,N,k;
//    freopen("in","r",stdin);
//    freopen("out","w",stdout);
    scanf("%d",&N);
    while(N>0)
    {
        scanf("%d",&n);
        for(i=0; i<=n/2; i++)
        {
            for(j=1; j<=n/2-i; j++)
                putchar('*');
            for(j=2; j<=2*i-1; j++)
                printf(" ");
            for(j=1; j<=n/2-i; j++)
                putchar('*');
            printf("\n");
        }
        for(i=1; i<=n/2; i++)
        {
            for(j=1; j<=n/2-i; j++)
                putchar('*');
            for(j=2; j<=2*i-1; j++)
                printf(" ");
            for(j=1; j<=n/2-i; j++)
                putchar('*');
            printf("\n");
        }
        printf("\n");
        N--;
    }
    return 0;
}
