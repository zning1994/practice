#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct
{
    double x,y;
}POINT;
void input_point(POINT *p)
{
    scanf("%lf",&(p->x));
    scanf("%lf",&(p->y));
}
double distance(POINT p1,POINT p2)
{
    double dist;
    dist=sqrt(((p2.x-p1.x)*(p2.x-p1.x))+((p2.y-p1.y)*(p2.y-p1.y)));
//    printf("=%lf=",dist);
    return dist;
}
int main()
{
   POINT p,q;
   double dis;
   input_point(&p);
   input_point(&q);
   dis=distance(p,q);
   printf("%lf",dis);
   return 0;
}
