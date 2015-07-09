#include<stdio.h>
#include<string.h>
#define N 50000
int find(char str[],char ch)
{
    int i=0,a=-1;
    for(i=0; str[i]!='\0'; i++)
        if(ch==str[i])
        {
            return (i+1);
            a=1;
            break;
        }
    if(a==-1)
    {
        i=-1;
        return i;
    }
}
int main()
{
    char str1[N],ch;
    scanf("%s",str1);
    getchar();
    scanf("%c",&ch);
    if(find(str1,ch)!=-1)
        printf("%d",find(str1,ch));
    else
        printf("Not found");
    return 0;
}
