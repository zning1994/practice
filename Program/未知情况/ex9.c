#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,x3,y3;
    double a,b,c,d,e;
    printf("Please enter 3 groups numbers(like 0 0 2 0 1 2), ");
    printf("but you should ensure the 3 groups numbers can build a SanJiaoXing in Zuobiaoxi:");
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
    a=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    b=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    c=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    d=(a+b+c)/2;
    e=sqrt(d*(d-a)*(d-b)*(d-c));
    printf("The SanJiaoXing's square is %lf.",e);
    return 0;
}
