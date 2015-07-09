#include<iostream>
#include<cstdio>
#define INT_MAX 1000000000
#define MAXN 1000010
using namespace std;
int N,C,d[MAXN],f[2][128],hmax,low[128],high[128];
bool input()
{
    if(scanf("%d%d",&N,&C)==EOF)
        return false;
    int i;
    hmax=-1;
    for(i=1; i<=N; i++)
    {
        scanf("%d",&d[i]);
        if(d[i]>hmax)
            hmax=d[i];
    }
    return true;
}
void DP()
{
    int i,j,k,a,b,tmp1,tmp2;
    a=0,b=1;
    for(i=1; i<=hmax; i++)
    {
        if(i<d[1])
            f[a][i]=INT_MAX;
        else
            f[a][i]=(d[1]-i)*(d[1]-i);
    }
    for(i=2; i<=N; i++)
    {
        tmp1=tmp2=INT_MAX;
        for(j=1; j<=hmax; j++)
        {
            if(tmp1>-C*j+f[a][j])
                tmp1=-C*j+f[a][j];
            low[j]=tmp1;
        }
        for(j=hmax; j>=1; j--)
        {
            if(tmp2>C*j+f[a][j])
                tmp2=C*j+f[a][j];
            high[j]=tmp2;
        }
        for(j=1; j<=hmax; j++)
        {
            if(j<d[i])
            {
                f[b][j]=INT_MAX;
                continue;
            }
            f[b][j]=low[j]+C*j+(j-d[i])*(j-d[i]);
            if((tmp1=high[j]-C*j+(j-d[i])*(j-d[i]))<f[b][j])
                f[b][j]=tmp1;
        }
        a=1-a,b=1-b;
    }
    int ans=INT_MAX;
    for(i=1; i<=hmax; i++)
        if(f[a][i]<ans)
            ans=f[a][i];
    printf("%d\n",ans);
}
int main()
{
    while(input())
        DP();
    return 0;
}
