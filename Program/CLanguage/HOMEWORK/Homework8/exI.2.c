
21:28:57

21:29:30

8:33:09


Ö£±¦Èð  21:49:26
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX_STR_LEN 102
char * trim(char *s)
{
    int j,cou,i;
    cou=0;
    j=strlen(s);
    for(i=0;i<j;i++)
    {
        if(isspace(s[i]))
            cou++;
        else
            break;
    }
    for(i=0;s[i]!='\0';i++)
        s[i]=s[i+cou];
    j=strlen(s);
    for(i=j-1;i>=0;i--)
    {
          if(!isspace(s[i]))
             {
                  s[i+1]='\0';
                  break;
             }
    }
   return s;
}
int main()
{
    char str[MAX_STR_LEN], *p;
    do
    {
        gets(str);
        p = trim(str);
        puts(p);
    } while(strcmp(p, "END"));
    return 0;
}

