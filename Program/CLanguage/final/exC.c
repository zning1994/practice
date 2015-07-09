#include<stdio.h>
#include<string.h>
//#define ONLINE_JUDGE
typedef struct
{
    char name[15];
    int grade;
    int len;
} STUDENT;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
    int N,i,j;
    STUDENT info[220];
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        scanf("%s",info[i].name);
        scanf("%d",&info[i].grade);
        info[i].len=strlen(info[i].name);
    }
    for(i=0; i<N; i++)
    {
        for(j=0; j<8-info[i].len; j++)
            printf(" ");
        printf("%s |",info[i].name);
        for(j=0; j<info[i].grade; j++)
            printf("=");
        printf("\n");
    }
    return 0;
}
