#include<stdio.h>
int main()
{
        freopen("inDz.txt","r",stdin);
    freopen("outDZNing.txt","w",stdout);
    int m,a=0,b=0,c=0,i=1,j=0,k=0,n=0,sum=0,old=0;
    while(scanf("%d",&m)!=EOF)
    {
        for(n=100;n<=999;n++)
        {
            if(n%m==0)
            {
                old=n;
                for(i=2;i>=0;i--)
                {
                    a=old%10;
                    old/=10;
                    b=old%10;
                    old/=10;
                    c=old;
                    //printf("%d %d %d\n",a,b,c);
                    if(a!=b&&a!=c&&b!=c)
                        sum+=n;
                    else
                        a=0,b=0,c=0;
                }

            }
        }
        j++;
        printf("case %d:%d\n",j,sum);
        sum=0;
    }
    return 0;
}


