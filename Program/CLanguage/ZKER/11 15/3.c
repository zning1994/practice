#include <stdio.h>
#include <ctype.h>
int main()
{
    int i,len,j;
    char str[80];
    gets(str);
    i=j=0;
    while (str[i]!='\0')
    {
        if (str[i]!='a')
            str[j++]=str[i];
        i++;
    }
    str[j]='\0';
    puts(str);
    return 0;
}
