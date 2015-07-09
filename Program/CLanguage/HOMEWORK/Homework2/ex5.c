#include<stdio.h>
#include<string.h>
int main()
{
    char x[28],y[28];
    gets(x);
    gets(y);
    if(strlen(x)>=strlen(y))
    {
        puts(x);
        puts(y);
    }
    else
    {
        puts(y);
        puts(x);
    }
    return 0;
}
