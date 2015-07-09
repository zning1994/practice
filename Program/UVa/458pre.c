#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char s1[1000000];
int main()
{
    int i,j,len;
    while(gets(s1)!=NULL)
    {
        len=strlen(s1);
        for(i=0; i<len; i++)
            printf("%c",s1[i]-7);
        printf("\n");
        memset(s1,0,sizeof(s1));
    }
    return 0;
}
