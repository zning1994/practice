#include<stdio.h>
#include<string.h>
#define N 50000
int find(char str[],char ch,int k)
{
    int i=0,a=-1,b=0,length;
    length=strlen(str);
    for(i=length-1; i>=0; i--)
        if(ch==str[i])
        {
            b++;
            if(b==k)
            {
                return (i+1);
                a=1;
                break;
            }
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
    int kk;
    scanf("%s",str1);
    getchar();
    scanf("%c",&ch);
    scanf("%d",&kk);
    if(find(str1,ch,kk)!=-1)
        printf("%d",find(str1,ch,kk));
    else
        printf("Not found\n");
    return 0;
}
