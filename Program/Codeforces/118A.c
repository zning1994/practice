#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char s[110];
    int len,i;
    while(scanf("%s",s)!=EOF)
    {
        len=strlen(s);
        for(i=0; i<len; i++)
            s[i]=tolower(s[i]);
        for(i=0; i<len; i++)
            if(s[i]!='a'&&s[i]!='o'&&s[i]!='y'&&s[i]!='e'&&s[i]!='u'&&s[i]!='i')
                printf(".%c",s[i]);
        printf("\n");
        memset(s,0,sizeof(s));
    }
    return 0;
}
