#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#define MAX_STR_LEN 110
char *trim(char *s)
{
    int i=0,j,k,p=0;
    for(i=0; s[i]==32; i++); /*循环结束后的i值为前导空格的个数*/
    if(i==0)
    {
        i=0,p=0;
        while(s[p]!='\0')p++;
        for(k=p-1; s[k]==32; k--);
        s[k+1]='\0';
    }
    else
    {
        p=0;
        //删除后倒
        while(s[p]!='\0')p++;
        for(k=p-1; s[k]==32; k--);
        s[k+1]='\0';
        //删除前导
        for(j=i; s[j]!='\0'; j++) s[j-i]=s[j];
        s[j-i]='\0';
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
