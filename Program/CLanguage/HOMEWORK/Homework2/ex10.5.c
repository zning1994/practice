#include<stdio.h>
int main()
{
    int a,b,i,j,m,n;
    while(scanf("%d",&n)!=EOF)
    {
        for(j=0;j<n;j++)
        {
            b=0;
            scanf("%d",&m);
            for(i=0;i<m;i++)
            {
                scanf("%d",&a);
                b=b+a;
            }
            printf("%d\n\n",b);
        }
    }
    return 0;
}
