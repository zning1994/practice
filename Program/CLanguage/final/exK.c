#include<stdio.h>
//#define ONLINE_JUDGE
typedef struct
{
    char name[100];
    double CHENG_JI[100];
}INFO;
typedef struct
{
    char KE_MU[100];
}CLASS;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
    int m,n,i,j;
    INFO stu[100];
    CLASS str[100];
    double sum=0,ave=0;
    scanf("%d%d",&m,&n);
    //Start: the result.
    for(i=0; i<n+1; i++)
        scanf("%s",str[i].KE_MU);
    for(i=0; i<m; i++)
    {
        scanf("%s",stu[i].name);
        for(j=0; j<n; j++)
            scanf("%lf",&stu[i].CHENG_JI[j]);
    }
    //output part
    printf("%s    ",str[0].KE_MU);
    for(i=1; i<=n; i++)
        printf("  %5s",str[i].KE_MU);
    printf("    sum\n");
    //output list
    for(i=0; i<m; i++)
    {
        printf("%-8s",stu[i].name);
        for(j=0; j<n; j++)
        {
            sum+=stu[i].CHENG_JI[j];
            printf("  %5.1lf",stu[i].CHENG_JI[j]);
        }
        printf("  %5.1lf\n",sum);
        sum=0;
    }
    printf("average ");
    for(j=0; j<n; j++)
    {
        for(i=0; i<m; i++)
            ave+=stu[i].CHENG_JI[j];
        printf("  %5.1lf",ave/m);
        ave=0;
    }
    putchar('\n');
    return 0;
}
