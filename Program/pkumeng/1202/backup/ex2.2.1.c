#include<stdio.h>
void main()
{
    char s[5][100],*p[5];
    int i,j;
    printf("Input 5 strings:\n");
    for(i=0; i<5; i++)
        gets(s[i]);
    printf("-------------------------\n");
    for(i=0; i<5; i++)
        p[i]=s[i];
    for(i=0; i<5; i++)
        for(j=i+1; j<5; j++)
            cmp(p[i],p[j]);
    for(i=0; i<5; i++)
        puts(s[i]);
}
int cmp(char s[100],char t[100])
{
    char string[100];
    int i=0;
    for(i=0; i<100&&t[i]; i++)
        if(s[i]>t[i])
        {
            cpy(string,s);
            cpy(s,t);
            cpy(t,string);
            break;
        }
    printf("%s %s\n",s,t);
    return 0;
}
int cpy(char a[100],char b[100])
{
    int i;
    for(i=0; b[i]!='\0'&&i<100; i++)
        a[i]=b[i];
    a[i]='\0';
    return 0;
}
