#include<stdio.h>
typedef struct Student
{
    char major[50];//专业
    char name[50];//姓名
    int score[3];//3门课程的成绩
} STU;
void printInfo(STU students[],int num)
{
    int i;
    for(i=0;i<num;i++)
    {
        printf("%s,%s:",students[i].major,students[i].name);
        printf("%d.\n",students[i].score[0]+students[i].score[1]+students[i].score[2]);
    }
}
int main()
{
    int i,N;
    scanf("%d",&N);
    STU stus[N];
    getchar();
    for (i=0;i<N;i++)
    {
        scanf("%s %s",stus[i].major,stus[i].name);
        scanf("%d%d%d",&stus[i].score[0],&stus[i].score[1],&stus[i].score[2]);
    }
    printInfo(stus,N);
    return 0;
}
