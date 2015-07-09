#include<stdio.h>
#include<string.h>
void ReverseStr(char *s)
{
    int i,j;
    char c;
    j=strlen(s);
    for(i=0; i<j/2; i++)
    {
        c=s[i];
        s[i]=s[j-1-i];
        s[j-1-i]=c;
    }
}
int main()
{
    char s[100];
    gets(s);
    ReverseStr(s);
    printf("%s\n",s);
    return 0;
}
