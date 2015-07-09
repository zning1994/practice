#include<stdio.h>
#include <stdlib.h>
typedef struct
{
    char name[10];
    int age;
}STUINFO;
void printInfo(STUINFO stu)
{
    printf("%s %d",stu.name,stu.age);
}
STUINFO fun()
{
    STUINFO wang={"wang",21};
    return wang;
}
int main()
{
    STUINFO zhang={"zhang",20},zhao;
    printInfo(zhang);
    zhao=fun();
    printInfo(zhao);
    return 0;
}

