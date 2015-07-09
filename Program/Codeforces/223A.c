#include<stdio.h>
#include<string.h>
int main()
{
    int a[1100],n,i,j,max;
    unsigned long long ssum=0,dsum=0;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        max=a[0];
        for(i=1; i<n; i++)
            for(j=1; j<n; j++)
                if(max)
        for(i=0; i<n/2; i++)
            if(a[i]>a[n-i-1])
                ssum+=a[i];
            else
                dsum+=a[i];
        printf("%llu %llu\n",ssum,dsum);
        memset(a,0,sizeof(0));
        ssum=0,dsum=0;
    }
    return 0;
}
