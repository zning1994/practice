#include<stdio.h>
cmp(char s[80],char t[80])
{
    char string[80];
    int i=0;
    for(i=0; i<80&&t[i]; i++)
        if(s[i]>t[i])
        {
            cpy(string,s);
            cpy(s,t);
            cpy(t,string);
            break;
        }
        else if (s[i]<t[i]) break;
    printf("%s   %s\n",s,t);
}
cpy(char a[80],char b[80])
{
    int i;
    for(i=0; b[i]!='\0'&&i<80; i++)
        a[i]=b[i];
    a[i]='\0';
}
int main()
{
    char s[5][80],*p[5];
    int i,j;
    printf("请输入5个字符串~么么~:\n");
    for(i=0; i<5; i++)
        gets(s[i]);
    printf("======================\n");
    for(i=0; i<5; i++)
        p[i]=s[i];
    for(i=0; i<5; i++)
        for(j=i+1; j<5; j++)
            cmp(p[i],p[j]);
//    for(i=0; i<5; i++)
//        puts(s[i]);
    return 0;
}
