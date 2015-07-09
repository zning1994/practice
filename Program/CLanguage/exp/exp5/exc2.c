#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{

    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int t,s,N,i=0,j=0,j1,true1=0,true2=0,l=0,big;
    int lo,hi,be;
    scanf("%d%d%d",&t,&s,&N);
    int low[N],high[N],b[N],m[N],n[N],k[N];
    for(i=0; i<N; i++)
    {
        scanf("%d%d%d",&low[i],&high[i],&b[i]);
    }
    i=N-1;
    while(i>=0)
    {
        if(t>=low[i]&&t<=high[i])
        {
            m[i]=1;
            n[j]=i;
            j++;
        }
        else
            m[i]=0;
        i--;
    }

    }
