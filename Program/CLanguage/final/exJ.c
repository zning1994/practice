#include<stdio.h>
#include<string.h>
//#define ONLINE_JUDGE
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
    char str[1100];
    int truenum[1100];
    unsigned long long int sum=0,len=0,part=1,i=0;
    while(scanf("%s",str)!=EOF)
    {
        len=strlen(str);
        for(i=0;i<len;i++)
            truenum[len-1-i]=str[i]-'0';
        for(i=0;i<len;i++)
        {
            sum+=truenum[i]*part;
            part*=2;
        }
        printf("%llu\n",sum);
        sum=0,len=0,part=1,i=0;
    }
    return 0;
}
