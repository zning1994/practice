#include<stdio.h>
#include<string.h>
#define MAX_STR_LEN 110
char * str_rev(char * t, char * s)
{
    char p;
    int i,j;
    i=strlen(s);
    strcpy(t,s);
    for(j=0;j<strlen(s)/2;j++,i--)
    {
        p=s[j];
        s[j]=s[i-1];
        s[i-1]=p;
    }
    strcpy(t,s);
    return t;
}
int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    gets(s);
    p = str_rev(str, s);
    puts(p);
    puts(str);
    return 0;
}
