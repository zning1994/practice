#include<stdio.h>
#include<string.h>
#define MAX 21000000
int T,N,i,j,landmark[2010][2010],dis[2010],role[2010],a,b,dist,min,true;
int distance()
{
    memset(role,0,sizeof(role));
    dis[1]=0,role[1]=1;
    for(i=2; i<=N; i++)
        dis[i]=landmark[1][i],role[i]=0;
    for(i=1; i<=N; i++)
    {
        min=MAX;
        for(j=1; j<=N; j++)
            if(!(role[j])&&(min>dis[j]))
                true=j,min=dis[j];
        role[true]=1;
        for(j=1; j<=N; j++)
            if(!(role[j])&&(dis[j]>min+landmark[true][j]))
                dis[j]=min+landmark[true][j];
    }
    return dis[N];
}
int main()
{
    for(i=1; i<2010; i++)
        for(j=1; j<2010; j++)
            landmark[i][j]=MAX;
    scanf("%d%d",&T,&N);
    for(i=1; i<=T; i++)
    {
        scanf("%d%d%d",&a,&b,&dist);
        if(landmark[a][b]>dist)
            landmark[a][b]=dist,landmark[b][a]=dist;
    }
    printf("%d\n",distance());
    return 0;
}
