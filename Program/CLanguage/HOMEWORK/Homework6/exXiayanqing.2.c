#include<stdio.h>
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int a[100][100],b[100][100],i,j,m,n,M,t=0;
    scanf("%d",&M);
    while(t<M)
    {
        scanf("%d%d",&m,&n);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
                b[j][i]=a[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if((j+1)%m==0)
                    printf("%d\n",b[i][j]);
                else
                    printf("%d ",b[i][j]);
            }
            t++;
        }
    }
    return 0;
}
