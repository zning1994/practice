#include<stdio.h>
int main()
{
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    char id[1000],thing[30];
    int pb,y,m,d,hou,min,sec,N;
    scanf("%d",&N);
    while(N>0)
    {
        scanf("%s%d%d-%d-%d%d:%d:%d",&id,&pb,&y,&m,&d,&hou,&min,&sec);
        gets(thing);
        printf("%s%d$$%d$$%s\n",id,pb,d,thing);
        N--;
    }
    return 0;
}
//
//
