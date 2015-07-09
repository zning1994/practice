#include <stdio.h>
#include <string.h>
int main()
{
    char str[80],str1[80];
    int i;
    gets(str);
    i=0;
    while(str1[i]=str[i++]);
//    for (i=0;str[i]!='\0';i++)
//            str1[i]=str[i];
//    str1[i]='\0';
    puts(str1);
    return 0;
}





