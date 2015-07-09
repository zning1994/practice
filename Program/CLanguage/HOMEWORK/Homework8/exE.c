#include<stdio.h>
#define SWAP(s,x,y){s=x;x=y;y=s;}
void int_swap(int *a,int *b)
{
    int c;
    c=*a,*a=*b,*b=c;
}
void dbl_swap(double *a,double *b)
{
    double c;
    c=*a,*a=*b,*b=c;
}
int main()
{
    int x1, y1, t1;
    double x2, y2, t2;

    scanf("%d %d", &x1, &y1);
    int_swap(&x1, &y1);
    printf("%d %d\n", x1, y1);

    scanf("%d %d", &x1, &y1);
    SWAP(t1, x1, y1);
    printf("%d %d\n", x1, y1);

    scanf("%lf %lf", &x2, &y2);
    dbl_swap(&x2, &y2);
    printf("%lg %lg\n", x2, y2);

    scanf("%lf %lf", &x2, &y2);
    SWAP(t2, x2, y2);
    printf("%lg %lg\n", x2, y2);
}
