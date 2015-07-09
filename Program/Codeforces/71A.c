#include<stdio.h>
#include<string.h>
int main()
{
    int len,N;
    char s[110];
    scanf("%d",&N);
    while(N--)
    {
        scanf("%s",s);
        len=strlen(s);
        if(len<=10)
            printf("%s\n",s);
        else
            printf("%c%d%c\n",s[0],len-2,s[len-1]);
        memset(s,0,sizeof(s));
    }
    return 0;
}
