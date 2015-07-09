#include<stdio.h>
typedef struct
{
    char name[20];
    char choice[21];
    int n;
}INF;
int main()
{
    int m,n,i,j,cou,x;
    scanf("%d%d",&m,&n);
    INF cai[m];
    for(i=0; i<m; i++)
    {
        scanf("%s",cai[i].name);
        for(j=0; j<n; j++)
            scanf("%c",&cai[i].choice[j]);
        scanf("%d",&cai[i].n);
    }
    x=0;
    for(i=1;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(cai[x].choice[j]==cai[i].choice[j]);
            cou++;
        }
        printf("%s:",cai[m].name);
        if(cou>=cai[m].n)
        {
            printf("%c,",cai[i].name);
        }
        m++;
    }
}
