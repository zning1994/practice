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
    for(i=0;i<k;i++)
    {
        if(str[i]==s)
        {
            for(j=i;j<k;j++)
                str[j]=str[j+1];
            m++;
        }
        if(m==0)
            break;

    }
    k1=strlen(str);
    str[k1]='\0';
    for(i=0;i<k1;i++)
        printf("%c\n",str[i]);
    puts(str);
    return 0;
}
