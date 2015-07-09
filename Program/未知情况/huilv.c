#include <stdio.h>
int main()
{
    float a,b,c;
    int x,y;
    scanf("%.4f %.4f %.4f",&a,&b,&c);
    scanf("%d",&x);
    scanf("%d",&y);
    printf("%.2f %.2f %.2f\n",x*a/100,x*b/100,x*c/100);
    printf("%.2f %.2f %.2f\n",y*100/a,y*100/b,y*100/c);
    return 0;
}
