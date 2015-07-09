#include<stdio.h>
int main()
{
    int n,i,j;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        else
        {
            if(n%2==0)
            {
                for(i=1; i<=n; i++)
                {
                    for(j=1; j<=n-i; j++)
                        putchar(' ');
                    for(j=1; j<=2*i-1; j++)
                        printf("+");
                    printf("\n");
                }
                printf("\n");
            }
            else
            {
                for(i=n; i>0; i--)
                {
                    for(j=1; j<=n-i; j++)
                        putchar(' ');
                    for(j=1; j<=2*i-1; j++)
                        printf("+");
                    printf("\n");
                }
                printf("\n");
            }
        }
    }
}
