#include<stdio.h>
#include<string.h>
//#define ONLINE_JUDGE
#define MAX_STR_LEN 1100
char * revs(char * s)
{
    int len,i;
    char temp;
    len=strlen(s);
    for(i=0;i<len/2;i++)
    {
        temp=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=temp;
    }
    return s;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
    char s[MAX_STR_LEN];
    gets(s);
    revs(s);
    puts(s);
    return 0;
}
