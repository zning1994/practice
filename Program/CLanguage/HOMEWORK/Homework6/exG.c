#include<stdio.h>
#include<string.h>
void head(char* s)
{
    int i,j;
    for(i=0; s[i]==32; i++); /*循环结束后的i值为前导空格的个数*/
    if(i==0) return;
    for(j=i; s[j]!='\0'; j++) s[j-i]=s[j];
    s[j-i]='\0';
}
void tail(char* s)
{
    int i=0,k;
    while(s[i]!='\0')i++;
    for(k=i-1; s[k]==32; k--);
    s[k+1]='\0';
}
int main()
{
    char s[101],s2[]="END";
    while(gets(s))  /*输入一个字符串*/
    {
        head(s);
        tail(s);
        if(strcmp(s,s2)==0) break;
        puts(s);
    }
    printf("END\n");
    return 0;
}
