#include<stdio.h>
int main()
{
    double a,b,c,d,e,f,g,h,i;
    int x,y;
    scanf("%lf%lf%lf%d%d",&a,&b,&c,&x,&y);
    d=x*a/100;
    e=x*b/100;
    f=x*c/100;
    g=y/a*100;
    h=y/b*100;
    i=y/c*100;
    printf("%.2lf %.2lf %.2lf\n",d,e,f);
    printf("%.2lf %.2lf %.2lf\n",g,h,i);
    return 0;
}
