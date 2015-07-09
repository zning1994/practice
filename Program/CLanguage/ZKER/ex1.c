#include <stdio.h>
int main()
{
    int a, b, c, d;
    //printf("a=");
    scanf("%d",&a);
    //printf("b=");
    scanf("%d",&b);
    c=a+b;
    d=a-b;
    //printf("%d%d",c,d);
    printf("%d+%d=%05d\n",a,b,c);
    printf("%d-%d=%05d",a,b,d);
    return 0;
}
