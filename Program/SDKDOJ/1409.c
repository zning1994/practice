#include<stdio.h>
#include<string.h>
int main()
{
    unsigned long long int n=0,sum=0,num=0;
    int i;
    char ss[1000];
    while(scanf("%s",ss)!=EOF)
    {
        num=strlen(ss);
        for(i=0;i<num;i++)
            sum+=ss[i]-'0';
        printf("%llu\n",sum);
        n=0,sum=0,num=0;
    }
    return 0;
}
