#include<stdio.h>
#include<string.h>
int main()
{
    long int m,a,b,c,k,sum=0,i=0,j=0,l=0;
    scanf("%ld",&m);
    while(m>=1)
    {
        scanf("%d%d%d",&a,&b,&k);
        int s[(a-b)+10],p[(a-b)+10];
        for(i=a; i<=b; i++)
        {
            c=a;
            while(c>=0)
            {
                s[j++]=c%10;
            }
            for(; j>=0; j--)
            {
                if(s[j]==k)
                {
                    p[l++]=i;
                    break;
                }
            }
            j=0;
            memset(s,0,sizeof(s));
        }
        for(;l>=0;l--)
        {
            sum+=p[l];
        }
        printf("%d",sum);
        m--;
    }
    return 0;
}
