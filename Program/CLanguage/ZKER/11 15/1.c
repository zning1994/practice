#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[80];
    int i,n=0,len;
    gets(str);
    i=0;
    while (str[i]!='\0')
    {
        switch (toupper(str[i]))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            n++;
        }
        i++;
    }
    printf("%d",n);
    return 0;
}
