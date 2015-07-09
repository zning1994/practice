#include<stdio.h>
#include<string.h>
#define N 200
int main()
{
    char str[N];
    char *p,a;
    int len=0,i;
    printf("Please enter the passwords (do not more than 200 strings):");
    scanf("%s",&str);
    printf("wait...\n==========\n");
    for(i=0; str[i]!='\0'; i++)
        len++;
    for(i=0; i<len; i++)
    {

        if(str[i]>='A'&&str[i]<='Z')
        {
            a=str[i]+'a'-'A'+1;
            p=&a;
            str[i]=*p;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            a=str[i]+'A'-'a'+1;
            p=&a;
            str[i]=*p;
        }
    }
    printf("The sronger passwords is : %s\n",str);
    return 0;
}
