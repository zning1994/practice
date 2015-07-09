#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define N 100000
int main()
{
    char str[N],s;
    int i=0,k,k1,j=0,m=0;
    gets(str);
    k=strlen(str);
    scanf("%c",&s);
    while(str[i]!='\0')
    {
        if(str[i]!=s)
            str[j++]=str[i];
        i++;
    }
    str[j]='\0';
    puts(str);
    return 0;
}
