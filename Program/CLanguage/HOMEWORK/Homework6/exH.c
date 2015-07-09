#include<stdio.h>
#include<string.h>
#define PI 1010
int main()
{
    int N,i=1,p,n;
    char s[PI];
    scanf("%d",&N);
    n=N;
    while(N>0)
    {
        if(N==n)
        {
            getchar();
            gets(s);
            p=strlen(s);
            printf("case %d:length=%d.\n",i++,p);
            N--;
        }
        else
        {
            gets(s);
            p=strlen(s);
            printf("case %d:length=%d.\n",i++,p);
            N--;
        }
    }
    return 0;
}
