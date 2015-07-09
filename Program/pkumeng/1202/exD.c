#include<stdio.h>
#define P 1e-8
int main()
{
    double cm,m,kg,bmi;
    while(scanf("%lf%lf",&cm,&kg)!=EOF)
    {
        m=cm/100;
        bmi=kg/(m*m);
        if(bmi<19)
            printf("%.2lf lower\n",bmi);
        if(bmi>=19&&bmi<25)
            printf("%.2lf health\n",bmi);
        if(bmi>=25&&bmi<30)
            printf("%.2lf heavy\n",bmi);
        if(bmi>=30&&bmi<40)
            printf("%.2lf super heavy\n",bmi);
        if(bmi>=40)
            printf("%.2lf extra heavy\n",bmi);
    }
    return 0;
}
