#include<stdio.h>
#define NP 10000
typedef struct
{
    char name[40];
    double elec;
} INFOMA;
double save_money(double elecal)
{
    if(elecal<=2880)
        return elecal*0.48;
    if(elecal>2880&&elecal<=4800)
        return 0.48*2880+(elecal-2880)*0.53;
    if(elecal>4800)
        return 0.48*2880+0.53*1920+(elecal-4800)*0.78;
}
int main()
{
    int i=0,j,k;
    char str;
    INFOMA user[NP];
    while(scanf("%s",&user[i].name)!=EOF)
    {
        getchar();
        scanf("%lf",&user[i].elec);
        printf("%s:%.2lf\n",user[i].name,save_money(user[i].elec));
        i++;
    }
    return 0;
}
