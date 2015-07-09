#include<stdio.h>
int main()
{
    int b,c;
    double a;
    scanf("%lf",&a);
    if(a>=0)
        printf("+ %d %g",(int)a,a-(int)a);
    if(a<0)
        a=-a,printf("- %d %g",(int)a,a-(int)a);
    return 0;
}
