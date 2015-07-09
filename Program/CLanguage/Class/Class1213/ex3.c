#include<stdio.h>
typedef struct
{
    char name[1000];
    int grade[3];
    int sum;
} PEOINFO;
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int i;
    double ave=0;
    PEOINFO peoples[3];
    for(i=0; i<3; i++)
    {
        scanf("%s",peoples[i].name);
        getchar();
        scanf("%d%d%d",&peoples[i].grade[0],&peoples[i].grade[1],&peoples[i].grade[2]);
    }
    for(i=0; i<3; i++)
        peoples[i].sum=peoples[i].grade[0]+peoples[i].grade[1]+peoples[i].grade[2];
    for(i=0; i<3; i++)
    {
        ave+=peoples[i].sum;
        ave/=3;
    }
    int j;
    for(j=0; j<3; j++)
    {
        if(peoples[j].sum>ave)
        {
             printf("Congratulation! The student %s had get %d marks, and pass the average.\n",peoples[j].name[j],peoples[j].sum);
        }
    }
}
