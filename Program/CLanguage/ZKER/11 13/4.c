#include <stdio.h>
#include <string.h>
int main()
{
    char str[80]="computer",str1[80];
    int i,j;
    gets(str1);
    for (i=0;str[i]!='\0';i++);
    for (j=0;str1[j]!='\0';j++,i++)
        str[i]=str1[j];
    str[i]='\0';
//            str1[i]=str[i];
//    str1[i]='\0';
    puts(str);
    return 0;
}





