#include<stdio.h>
#include<malloc.h>
typedef struct
{
    double age;
    double a;
    char name[8];
} PEOINFO;
int main()
{
//    PEOINFO *p,stu={"zhang",19},*q;
//    p=&stu;
//    printf("%s %d\n",(*p).name,(*p).age);
//    printf("%s %d\n",p->name,p->age);//���ڽṹ���ڵı���ʹ�á�
//    q=(PEOINFO*)malloc(sizeof(PEOINFO)*10);
    printf("%d \n",sizeof(PEOINFO));
    return 0;
}
