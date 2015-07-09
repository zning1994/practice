#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int prime(int m,int n)
{
    int i,j,r=0;
    n++;
    int p[n+1];
    p[0]=p[1]=0;
    int check=(int)sqrt(n);
    for(i=2; i<=n; i++)
    {
        p[i]=i;
    }
    for(i=2; i<=n; i++)
    {
        if(p[i]==0) continue;
        if(i>check) break;
        for(j=i+i; j<=n; j+=i)
        {
            p[j]=0;
        }
    }
    r=0;
    for(i=m; i<=n-1; i++)
    {
        if(p[i]==0);
        else
        {
            r=1;
            printf("%d\n",p[i]);
        }
    }
    if(r==0) printf("\n");
}
int main()
{
    freopen("inB.txt","r",stdin);
    freopen("outB.txt","w",stdout);
    int m,n,r,t=0;
    while(scanf("%d%d",&m,&n) != EOF)
    {
        if(t==0) t=1;
        else printf("\n");
        r=m-n;
        prime(m,n);
    }
    return 0;
}
