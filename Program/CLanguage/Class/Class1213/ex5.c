#include<stdio.h>
#include<malloc.h>
typedef struct
{
    char name[10];
    int age;
}PEOINFO;
void printinfo(PEOINFO stu)
{
    printf("%s %d",stu.name,stu.age);
}
PEOINFO fun(PEOINFO *p)
{
    scanf("%s",p->name);
    scanf("%d",&(p->age));
    return *p;
//    PEOINFO wang={"wang",22};
//    return wang;
}
int main()
{
    PEOINFO zhang={"zhang",19},q,zhao,qian;
    printinfo(zhang);
    zhao=fun(&qian);
    printinfo(zhao);
    printinfo(qian);
//    q=fun();
//    printinfo(q);
    return 0;
}
