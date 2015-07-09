#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1000+10

int a[N],b[N],sum[N];
char s[N],str[N];
int i,k,len;
int ipp,npp;
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ipp=1;
    scanf("%d",&npp);
    while(ipp<=npp)
    {
        scanf("%s %s",s,str);
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        memset(sum, 0, sizeof(sum));
        k=0,len=strlen(s);
        for(i=len-1; i>=0; --i)
            a[k++]=s[i]-'0';
        len=strlen(str);
        k=0;
        for(i=len-1; i>=0; --i)
            b[k++]=str[i]-'0';
        k=0;
        for(i=0; i<N; ++i)
        {
            sum[i]=a[i]+b[i]+k;
            k=sum[i]/10;
            sum[i]%=10;
        }
        for(i=N-1; i>=0; --i)
            if(sum[i]) break;
        if(i==-1)
        {
            printf("Case %d:\n",ipp);
            printf("%s + %s = 0",s,str);
        }
        else
        {
            printf("Case %d:\n",ipp);
            printf("%s + %s = ",s,str);
            for(k=i; k>=0; --k)
                printf("%d",sum[k]);
        }
        printf("\n\n");
        ipp++;
    }
    return 0;
}
