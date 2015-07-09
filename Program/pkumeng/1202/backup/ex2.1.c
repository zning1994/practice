#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void px(char *p1)
{
    int i,j;
    char *p2;
    for(j=0;j<4;j++)
    {
        if(strcmp(*(p1+j),*(p2+i))>0)
        {
            p2=*(p1+j);
            *(p1+j)=*(p1+i);
            *(p1+i)=p2;
        }
    }
}
int main()
{
    char *str[5];
    char s[100][100];
    int i;
    for(i=0;i<5;i++)str[i]=s[i];
    for(i=0;i<5;i++)
    {
        scanf("%s",str[i]);
    }
    px(str);
    for(i=0;i<5;i++)
        printf("%s\n",str[i]);
    return 0;
}
