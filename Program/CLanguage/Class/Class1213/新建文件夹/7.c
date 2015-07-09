#include<stdio.h>
#include <stdlib.h>
typedef struct
{
    char name[10];
    int age;
}STUINFO;
void printInfo(STUINFO stu)
{
    printf("%s %d\n",stu.name,stu.age);
}
STUINFO inputInfo(STUINFO *p)
{
    scanf("%s",p->name);
    scanf("%d",&(p->age));
    return *p;
}
int main()
{
    STUINFO zhang={"zhang",20},zhao,qian;
    //printInfo(zhang);
    zhao=inputInfo(&qian);
    printInfo(zhao);
    printInfo(qian);
    return 0;
}

