#include<stdio.h>
typedef struct data
{
    int year,month,day;
}DATEB;
struct peopleinfo
{
    char sex;
    DATEB birthday;
    double height;
};
int main()
{
    struct peopleinfo zhang;
    zhang.sex='F';
    zhang.birthday.year=1999;
    zhang.birthday.month=3;
    zhang.birthday.day=1;
    zhang.height=187;
    printf("%d",zhang.birthday.year);
    return 0;
}
