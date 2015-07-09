#include<stdio.h>
int main()
{
    freopen("out","w",stdout);
    int t,n,m,i,j,k;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&m,&t);
        for(i=0; i<t; i++)
        {
            for(j=1; j<=m; j++)
            {
                for(k=0; k<j; k++)
                    printf("%d",j);
                putchar('\n');
            }
            for(j=m-1; j>0; j--)
            {
                for(k=0; k<j; k++)
                    printf("%d",j);
                putchar('\n');
            }
            if(i!=t-1)putchar('\n');
        }
        if(n!=0)putchar('\n');
    }
    return 0;
}
