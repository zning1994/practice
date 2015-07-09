#include<stdio.h>
#include<string.h>
#define MAX 21473647
int t,n,i,j,k;
int map[1001][1001],visit[1001],dis[1001];

int d()
{
    memset(visit,0,sizeof(visit));
    for(i=1; i<=n; i++)
    {
        dis[i]=map[1][i];
        visit[i]=0;
    }
    dis[1]=0;
    visit[1]=1;
    for(i=1; i<=n; i++)
    {
        int min=MAX;
        for(j=1; j<=n; j++)
        {
            if(!visit[j]&&min>dis[j])
            {
                min=dis[j];
                k=j;
            }
        }
        visit[k]=1;
        for(j=1; j<=n; j++)
        {
            if(!visit[j]&&dis[j]>min+map[k][j])
            {
                dis[j]=min+map[k][j];
            }
        }
    }
    return dis[n];
}

int main()
{
    scanf("%d%d",&t,&n);
    for(i=1; i<=1000; i++)
        for(j=1; j<=1000; j++)
            map[i][j]=MAX;
    for(i=1; i<=t; i++)
    {
        int a,b,distance;
        scanf("%d%d%d",&a,&b,&distance);
        if(map[a][b]>distance)
            map[a][b]=map[b][a]=distance;
    }
    int count=d();
    printf("%d\n",count);
    return 0;
}
