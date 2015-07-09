#include<stdio.h>
#include<math.h>
double func(double x)
{
    int y;
    if(x<0)
        return (-x);
    else if(x>0||(x<1e-8&&x>-1e-8)&&x<1)
    {
        y= sin(2*x);
        return y;
    }

    else if(x>=1&&x<5)
    {
        y= sqrt(x*x*x+x);
        return y;
    }
    else
        return (2*x+10);


}
int output(int n,double x)
{
    printf("case %d:%g.\n",n,x);
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


