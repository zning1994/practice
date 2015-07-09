#include<stdio.h>
#include<string.h>
//#define ONLINE_JUDGE
typedef struct
{
    char name[20];
    int len;
} MY;
void swap(char *a,char *b)
{
    char c[81];
    strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
    int N,i,j,temp;
    MY str[110];
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        scanf("%s",str[i].name);
        str[i].len=strlen(str[i].name);
    }
    for(i=1; i<N; i++)
        for(j=0; j<N-1; j++)
            if(str[j].len>str[j+1].len)
            {
                swap(str[j].name,str[j+1].name);
                temp=str[j].len;
                str[j].len=str[j+1].len;
                str[j+1].len=temp;
            }
    for(i=1; i<N; i++)
        for(j=0; j<N-1; j++)
            if(strcmp(str[j].name,str[j+1].name)>0&&str[j].len==str[j+1].len)
                swap(str[j].name,str[j+1].name);
    for(i=0; i<N; i++)
        printf("%s\n",str[i].name);
    return 0;
}
