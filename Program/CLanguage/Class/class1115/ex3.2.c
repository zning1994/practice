#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define N 100000
int main()
{
    char str[N],s;
    int i,k,k1,j,m=0;
    gets(str);
    k=strlen(str);
    scanf("%c",&s);
    for(i=0; i<k; i++)
    {
        if(str[i]==s)
            str[i]=0;
    }
    for(i=0; i<k; i++)
        if(str[i]!=0)
            printf("%c",str[i]);
    puts(str);
    return 0;
}
