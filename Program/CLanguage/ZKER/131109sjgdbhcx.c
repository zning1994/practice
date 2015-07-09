#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int x=0,i=0,j=0,y,c,n,f,d,a[10000],b[10000];
    scanf("%d",&n);
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    for(c=2; c<=n; c++)
    {
        d=0;
        for(y=2; y<c; y++)
        {
            if(c%y==0)
                d++;
        }
        if(d==0)
        {
            a[i++]=c;
            b[j++]=c;
            x++;
        }
    }
    for(i=0; i<=x; i++)
    {
        for(j=0; j<=x; j++)
            if(a[i]+b[j]==n&&a[i]<b[j])
                printf("%d + %d = %d\n",a[i],b[j],n);
    }
}
