#include<stdio.h>
#include<math.h>
#define P 1e-8
int output(int n,double a)
{
    printf("case %d:y=%g.\n",n,a);
}
double func(double x)
{
    if(x<0)
        return fabs(x);
    else if(x>=0&&x<1)
        return sin(2*x);
    else if(x>=1&&x<5)
        return sqrt(pow(x,3)+x);
    else
        return (2*x+10);
}
int main()
{
    int i, cases;
    double x;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        scanf("%lf", &x);
        output(i, func(x));
    }
    return 0;
}
