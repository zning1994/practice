#include <stdio.h>

typedef struct peopleInfo
{
    char sex;
    struct
    {
        int year,month,day;
    }birthday;
    double height;
}PEOINFO;
int main()
{
    PEOINFO zhang;
    zhang.sex='M';
    zhang.birthday.year=1999;
    zhang.birthday.month=1;
    zhang.birthday.day=3;
    zhang.height=187;
    return 0;
}




