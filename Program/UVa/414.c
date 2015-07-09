#include<stdio.h>
#include<string.h>
int main()
{
    char s[30];
    int t,n,i,judge=0,len,sum=0,count=0,min,t1;
    while(scanf("%d",&t))
    {
        t1=t;
        if(t==0)break;
        while(t--)
        {
            getchar();
            gets(s);
            len=strlen(s);
            for(i=0; i<len; i++)
                if(s[i]==' ')
                    count++;
            if(judge==0)
            {
                min=count;
                sum+=count;
                judge=1;
                count=0;
            }
            else
            {
                if(min>count)
                    min=count;
                sum+=count;
                count=0;
            }
        }
        printf("%d\n",sum-min*t1);
        sum=0,min=0,count=0,judge=0;
    }
    return 0;
}
