#include<stdio.h>
#include<string.h>
int main()
{
    char s[200];
    int len,i,j,sum=0;
    while(gets(s)!=NULL)
    {
        if(s[0]==' ')
        {
            printf("\n");
            continue;
        }
        else
        {
            len=strlen(s);
            for(i=0; i<len; i++)
            {
                if(s[i]>='1'&&s[i]<='9'&&(s[i+1]<'1'||s[i+1]>'9'))
                {
                    sum+=(s[i]-'0');
                    for(j=0; j<sum; j++)
                        if(s[i+1]=='b')
                            putchar(' ');
                        else
                            putchar(s[i+1]);
                    i++;
                }
                else if(s[i]>='1'&&s[i]<='9'&&s[i+1]>='1'&&s[i+1]<='9')
                {
                    sum+=(s[i]-'0');
                    continue;
                }
                else if(s[i]=='!')
                    putchar('\n');
                sum=0;
            }
            putchar('\n');
        }
    }
    return 0;
}
