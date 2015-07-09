#include<stdio.h>
int main()
{
    double r,s,l;
    printf("please input the r:");
    scanf("%lf",&r);
    if(r<0)
    {
        printf("the r is error.");
    }
    else
    {
        s=3.14*r*r;
        l=2*3.14*r;
        printf("s=%lf\nl=%lf" ,s,l);
    }
    return 0;
}

