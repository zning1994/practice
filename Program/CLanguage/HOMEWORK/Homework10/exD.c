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
        if(n>0)
        {
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n-i; j++)
                    putchar('*');
                for(j=2; j<=2*i-1; j++)
                    printf(" ");
                for(j=1;j<=n-i;j++)
                    putchar('*');
                printf("\n");
            }
            printf("\n");
        }
        else
        {
            n=-n;
            for(i=n; i>0; i--)
            {
                for(j=1; j<=n-i; j++)
                    putchar('*');
                for(j=1; j<=2*i-1; j++)
                    printf(" ");
                printf("\n");
            }
            printf("\n");
        }
    N--;
    }
    return 0;
}
