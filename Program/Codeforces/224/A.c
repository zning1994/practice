#include<stdio.h>
#include<string.h>
char s[1000000],s1[1000000],s2[1000000],s3[1000000];
int main()
{
    int len1,len2,len3,i,j;
    while(scanf("%s",s)!=EOF)
    {
        for(i=0; s[i]!='|'; i++)
            s1[i]=s[i];
        for(i++,j=0; s[i]!='\0'; i++,j++)
            s2[j]=s[i];
        scanf("%s",s3);
        len1=strlen(s1);
        len2=strlen(s2);
        len3=strlen(s3);
        if(len1>len2)
        {
            if(len2+len3==len1)
            {
                printf("%s|%s",s1,s2);
                for(i=0; i<len1-len2; i++)
                    printf("%c",s3[i]);
                putchar('\n');
            }
            else if(len2+len3>len1)
            {

            }
            else
                printf("Impossible\n");
        }
        else if(len1<len2)
        {
            if(len1+len3==len2)
            {
                printf("%s",s1);
                for(i=0; i<len2-len1; i++)
                    printf("%c",s3[i]);
                printf("|%s",s2);
                putchar('\n');
            }
            else if(len1+len3>len2)
            {

            }
            else
                printf("Impossible\n");
        }
        else
            printf("Impossible\n");
        memset(s1,0,sizeof(s1));
        memset(s2,0,sizeof(s2));
        memset(s3,0,sizeof(s3));
    }
    return 0;
}
