#include<iostream>
#include<cstdio>
using namespace std;
int w[1000010];
int main()
{
    int n;
    scanf("%d",&n);
    w[1]=1;
    w[2]=2;
    if(n==1||n==2)
    {
        printf("%d\n",w[n]);
        return 0;
    }
    for(int i=3; i<=n; i+=2)
    {
        w[i]=w[i-1];
        while(w[i]>=1000000000)w[i]-=1000000000;
        w[i+1]=w[i-1]+w[(i+1)>>1];
        while(w[i+1]>=1000000000)w[i+1]-=1000000000;
    }
    printf("%d\n",w[n]);
    return 0;
}
