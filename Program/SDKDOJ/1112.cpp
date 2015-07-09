#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

const int maxn=333;
const int OO=1e9;

int n,m,Q;
int a[maxn][maxn];
int f[maxn][maxn];
bool v[maxn];

int main()
{
    int cnt=1;
    while (~scanf("%d%d%d",&n,&m,&Q))
    {
        if (n==0&&m==0&&Q==0) break;
        memset(a,0,sizeof(a));
        memset(f,0,sizeof(f));
        memset(v,0,sizeof(v));
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (i==j) a[i][j]=0;
                else a[i][j]=OO;
                f[i][j]=a[i][j];
            }
        }
        for (int i=1; i<=m; i++)
        {
            int x,y,z;
            scanf("%d%d%d",&x,&y,&z);
            if (z<a[x][y])
            {
                a[x][y]=z;
            }
        }
        printf("Case %d:\n",cnt++);
        while (Q--)
        {
            int tp,x,y;
            scanf("%d",&tp);
            if (tp==0)
            {
                scanf("%d",&x);
                if (v[x])
                {
                    printf("City %d is already recaptured.\n",x);
                    continue;
                }
                v[x]=true;
                //
                for (int i=0; i<n; i++)
                {
                    if (v[i])
                    {
                        f[x][i]=min( f[x][i], a[x][i] );
                        for (int j=0; j<n; j++)
                        {
                            if (v[j])
                            {
                                f[x][j]=min( f[x][j], f[x][i]+f[i][j] );
                            }
                        }
                    }
                }
                //
                for (int i=0; i<n; i++)
                {
                    if (v[i])
                    {
                        f[i][x]=min( f[i][x], a[i][x] );
                        for (int j=0; j<n; j++)
                        {
                            if (v[j])
                            {
                                f[j][x]=min(f[j][x], f[j][i]+f[i][x]);
                            }
                        }
                    }
                }
                //
                for (int i=0; i<n; i++)
                {
                    if (v[i])
                    {
                        for (int j=0; j<n; j++)
                        {
                            if (v[j])
                            {
                                f[i][j]=min(f[i][j], f[i][x]+f[x][j]);
                            }
                        }
                    }
                }
            }
            else if (tp==1)
            {
                scanf("%d%d",&x,&y);
                if (v[x]&&v[y])
                {
                    if (f[x][y]<OO)
                    {
                        printf("%d\n",f[x][y]);
                    }
                    else
                    {
                        printf("No such path.\n");
                    }
                }
                else
                {
                    printf("City %d or %d is not available.\n",x,y);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
