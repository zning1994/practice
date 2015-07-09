#include<stdio.h>
#include<string.h>
#define MAXN 100000000
char s1[MAXN],s2[MAXN];
int main()
{
    unsigned long long int len1,len2,sum=0;
    int i,j;
    scanf("%s%s",s1,s2);
    len1=strlen(s1);
    len2=strlen(s2);
    for(i=0; i<len1; i++)
        for(j=0; j<len2; j++)
            sum+=((s1[i]-'0')*(s2[j]-'0'));
    printf("%I64u\n",sum);
    return 0;
}
