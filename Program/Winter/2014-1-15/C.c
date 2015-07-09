#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MAXN 100000
int main()
{
    int height[MAXN],difhigh[MAXN],pricec[MAXN],priced[MAXN],i,j,N,C,sum=0;
    scanf("%d%d",&N,&C);
    for(i=0; i<N; i++)
        scanf("%d",&height[i]);
    for(i=0; i<N-1; i++)
    {
        difhigh[0]=abs(height[i]-height[i+1]);
        pricec[i]=difhigh[i]*C;
        priced[i]=difhigh[i]*difhigh[i];
    }
    for(i=0; i<N-1; i++)
    {
        if(pricec[i]<=priced[i])
            sum+=pricec[i];
        else
            sum+=priced[i];
    }
    printf("%d\n",sum);
    return 0;
}
