#include <stdio.h>
#include <string.h>
int main()
{
    char str[80];
    int i;
    gets(str);
    for (i=0;str[i]!='\0';i++)
        if (str[i]>='a' && str[i]<='z')
            str[i]=str[i]-'a'+'A';
    puts(str);
    return 0;
}





