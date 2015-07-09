#include<stdio.h>
typedef struct peopleinfo
{
    char sex;
    int age;
    double height;
} PEOINFO;
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    PEOINFO peoples[10];
    int i,a;
    for(i=0; i<10; i++)
    {
        peoples[i].sex=getchar();
        getchar();
        scanf("%d",&peoples[i].age);
        scanf("%lf",&peoples[i].height);
    }
    //输出最大年龄人的身高。
    int older=(peoples[0].age),j,olderage=0;
    for(j=0; j<10; j++)
    {
        if(older<peoples[j].age)
        {
            olderage=j;
            older=peoples[j].age;
        }
    }
          printf("%d %lf",peoples[olderage].age,peoples[olderage].height);
    return 0;
}
