#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAXN 2010
char buf[MAXN],s[MAXN];
int p[MAXN];
int main()
{
    int m,n,i,j,ok=1;
    while(gets(buf)!=NULL)
    {
        n=strlen(buf);
        m=0;
        for(i=0; i<n; i++)
            if(isalnum(buf[i]))s[m++]=toupper(buf[i]);
            s[m]='\0';
        n=strlen(s);
        for(i=0; i<n/2; i++)
            if(s[i]!=s[n-i-1])ok=0;
        if(ok==0)
            printf("No.\n");
        else
            printf("Yes.\n");
        ok=1;
    }
    return 0;
}
