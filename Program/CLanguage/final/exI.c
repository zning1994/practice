#include<stdio.h>
#include<string.h>
#define ONLINE_JUDGE
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
    char s[20];
    int k,len;
    scanf("%s %d",&s,&k);
    len=strlen(s);
    if(k>len)
    {
        printf("error\n");
        return 0;
    }
    else
        printf("%c",s[k-1]);
    return 0;
}
