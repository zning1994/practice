#include<stdio.h>
#include<string.h>
#define MAX_STR_LEN 110
char * revs(char * s)
{
    char p;
    int i,j;
    i=strlen(s);
    for(j=0;j<strlen(s)/2;j++,i--)
    {
        p=s[j];
        s[j]=s[i-1];
        s[i-1]=p;
    }
    return s;
}
int main()
{
    char s[MAX_STR_LEN];
    gets(s);
    revs(s);
    puts(s);
    return 0;
}
