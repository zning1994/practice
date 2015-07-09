#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
typedef struct
{
    char s[110];
    int len;
} IN;
int main()
{
    IN sen[110];
    int num=1,i,max=1,j;
    for(i=0; gets(sen[i].s)!=NULL; i++)
    {
        sen[i].len=strlen(sen[i].s);
        if(sen[i].len>max)
            max=sen[i].len;
    }
    num=i;
    for(i=0; i<max; i++)
    {
        for(j=num-1; j>=0; j--)
        {
            if(i<sen[j].len)
                printf("%c",sen[j].s[i]);
            else
                putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}
