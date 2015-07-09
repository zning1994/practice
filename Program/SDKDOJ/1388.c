#include<stdio.h>
#include<string.h>
#define MAX_STR_LEN 101
char * str_rev(char * t, char * s)
{
    int i,j;
    i=strlen(s);
    strcpy(t,s);
    for(j=0;j<i;j++)
    {
        s[i-1-j]=t[j];
    }
    strcpy(t,s);
    return s;
}
int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN];
    gets(s);
    puts(str_rev(str, s));
    puts(str);
    return 0;
}
