#include <stdio.h>
typedef struct peopleInfo
{
    char sex;
    unsigned short int age;
    double height;
}PEOINFO;
int main()
{
    struct peopleInfo zhang={'F',19u,167};
    PEOINFO li,wang;
    li.sex='M';
    li.age=20;
    li.height=187;
    scanf("%c",&(wang.sex));
    getchar();
    scanf("%u",&wang.age);
    scanf("%lf",&wang.height);
    printf("%c %u %lf\n",zhang.sex,zhang.age,zhang.height);
    return 0;
}




