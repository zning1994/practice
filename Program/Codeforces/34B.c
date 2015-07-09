#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,m,a[110],temp,i,j,sum=0;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(i=0; i<n; i++)
            for(j=0; j<n-i; j++)
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
        for(i=0; i<m; i++)
        {
            if(a[i]<=0)
            {
                a[i]=(-a[i]);
                sum+=a[i];
            }
        }
        printf("%d\n",sum);
        sum=0;
        memset(a,0,sizeof(a));
    }
    return 0;
}
