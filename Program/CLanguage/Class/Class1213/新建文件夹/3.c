#include <stdio.h>
typedef struct peopleInfo
{
    char sex;
    int age;
    double height;
}PEOINFO;
int main()
{
    PEOINFO peoples[10];
    int i,a,k;
    for (i=0;i<3;i++)
    {
        peoples[i].sex=getchar();
        getchar();
        scanf("%d",&peoples[i].age);
        scanf("%lf",&peoples[i].height);
    }
    a=people[0].age;
    k=0;
    for(i=1;i<3;i++)
        if(a<peoples[i].age)
        {
            k=i;
            a=peoples[i].age;
        }
    printf("%lf",peoples[k].height);
    return 0;
}




