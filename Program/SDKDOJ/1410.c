#include<stdio.h>
#include<string.h>
int main()
{
    unsigned long long int n=0,sum=0,num=0,sum1=0;
    int i;
    char ss[1100];
    while(scanf("%s",ss)!=EOF)
    {
        num=strlen(ss);
        for(i=0; i<num; i++)
            sum+=ss[i]-'0';
        if(sum>10)
        {
            while(sum>10)
            {
                for(; sum!=0;)
                {
                    sum1+=sum%10;
                    sum/=10;
                }
                sum=sum1;
                sum1=0;
            }
            printf("%llu\n",sum);
        }
        else
            printf("%llu\n",sum);
        n=0,sum=0,num=0,sum1=0;
    }
    return 0;
}
