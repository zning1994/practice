#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int a[110],n,i,index,min;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        a[n]=a[0];
        min=1010;
        for(i=0; i<n; i++)
            if(abs(a[i]-a[i+1])<min)
            {
                index=i;
                min=abs(a[i]-a[i+1]);
            }
        if(index==n-1)
            printf("%d 1\n",index+1);
        else
            printf("%d %d\n",index+1,index+2);
    }
    return 0;
}
