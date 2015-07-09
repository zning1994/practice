#include<stdio.h>
#define PI 3.141592653
int main()
{
    float x,y,r;
    scanf("%f",&r);
    x=2*PI*r;
    y=PI*r*r;
    printf("周长x=%f\n面积y=%f\n",x,y);
    return 0;

}
