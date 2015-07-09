#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
typedef struct
{
    double x;
    double y;
}POINT;
void input_point(POINT *pt)
{
    scanf("%lf %lf",&pt->x,&pt->y);
}
double distance1(POINT p1, POINT p2)
{
    double result;
    result=sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
    return result;
}
int main()
{
   POINT p,q;
   double dis;
   input_point(&p);
   input_point(&q);
   dis=distance1(p,q);
   printf("%g",dis);
   return 0;
}
