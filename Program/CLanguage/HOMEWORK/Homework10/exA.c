#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
typedef struct
{
    char strstart[30];
    int strnum;
} STR;
void swap(char *a,char *b)
{
    char c[81];
    strcpy(c, a);
    strcpy(a, b);
    strcpy(b, c);
    memset(c,0,sizeof(c));
}
int cmp(char *s1,char *s2)
{
    while (*s1 == *s2++)
        if (*s1++ == 0)
            return (0);
    return (*s1 - *(s2-1));
}
int main()
{
    int N,i,j,temp;
    scanf("%d",&N);
    STR group[N+50];
    for(i=0; i<N; i++)
    {
        scanf("%s",&group[i].strstart);
        getchar();
        group[i].strnum=strlen(group[i].strstart);
    }
    //First: 对字符多少进行排序
    for(i=1; i<=N-1; i++)
        for(j=0; j<N-i; j++)
            if(group[j].strnum>group[j+1].strnum)
            {
                swap(group[j].strstart, group[j+1].strstart);
                temp=group[j].strnum;
                group[j].strnum=group[j+1].strnum;
                group[j+1].strnum=temp;
            }
    //Second: 对字符进行排序
    for(i=1; i<=N-1; i++)
        for(j=0; j<N-i; j++)
            if(strcmp(group[j].strstart, group[j+1].strstart)>0&&group[j].strnum==group[j+1].strnum)
                swap(group[j].strstart, group[j+1].strstart);
    for(i=0; i<N; i++)
        printf("%s\n",group[i].strstart);
    return 0;
}
