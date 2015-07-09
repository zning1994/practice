#include<stdio.h>
int main()
{
    double x,c;
    int b,i=0;
    scanf("%lf",&x);
    while((int)x/2!=0)
    {
        x=(int)x/2;
        i++;
    }
    printf("%d",i);
    return 0;
}
