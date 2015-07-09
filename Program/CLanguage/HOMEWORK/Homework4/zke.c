#include<stdio.h>
int main()
{
    freopen("inDz.txt","r",stdin);
    freopen("outDz.txt","w",stdout);
    int m,a,b,c,d,i,s,j;
    j=0;
    while(scanf("%d",&m)!=EOF)
    {
        s=0;
        d=0;
        j++;
        for (i=100;;i++)
        {
        	if (i%m==0)
        	{
        		d=i;
        		break ;
        	}
        	}
        for(;d<=999;d=d+m)
        {
            c=d%10;
            a=d/100;
            b=(d-100*a)/10;
            if (a!=b&&b!=c&&a!=c)
                s=s+d;
        }
        printf("Case %d:%d\n",j,s);
    }
    return 0;
}
