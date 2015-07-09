#include<stdio.h>
#include <stdlib.h>
typedef struct
{
    char name[10];
    char sex;
    double age;

}STUINFO;
int main()
{
    STUINFO *p,stu={"zhang",19},*q;
//    p=&stu;
//    printf("%s %d\n",(*p).name,(*p).age);
//    printf("%s %d",p->name,p->age);
//    q=(STUINFO*)malloc(sizeof(STUINFO)*10);
    printf("%d",sizeof(STUINFO));
    return 0;
}

