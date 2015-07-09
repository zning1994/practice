#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX_STR_LEN 1010
char *trim(char *s)
{
    int len,len2,i,count=0;
    len=strlen(s);
    for(i=0; i<len; i++)
        if(isspace(s[i]))
            count++;
        else
            break;
    for(i=0; s[i]!='\0'; i++)
        s[i]=s[count+i];
    len2=strlen(s);
    for(i=len2-1; i>=0; i--)
        if(!isspace(s[i]))
        {
            s[i+1]='\0';
            break;
        }
    return s;
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    char str[MAX_STR_LEN], *p;
    do
    {
        gets(str);
        p = trim(str);
        puts(p);
    }
    while(strcmp(p, "END"));
    return 0;
}
