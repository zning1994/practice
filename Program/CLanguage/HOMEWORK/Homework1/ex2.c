#include<stdio.h>
int main()
{
    double r,s,c;
    scanf("%lf",&r);
    s=r*r*3.14;
    c=2*3.14*r;
    printf("Area: %lf\n",s);
    printf("Perimeter: %lf",c);
    return 0;
}
