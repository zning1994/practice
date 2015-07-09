#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char s[1000000];
int main()
{
    int i,j,len,count=0;
    while(gets(s)!=NULL)
    {
        len=strlen(s);
        for(i=0; s[i]!='\0'; i++)
            if((s[i]==' ')&&((s[i+1]>='A'&&s[i+1]<='Z')||(s[i+1]>='a'&&s[i+1]<='z')))
                count++;
        printf("%d\n",count+1);
        count=0;
    }
    return 0;
}
