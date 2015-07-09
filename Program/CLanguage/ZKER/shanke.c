#include<stdio.h>
int main()
{
    int x,y,a,b,c,d,e,f,g;
    scanf("x = %d, y = %d",&x,&y);
    a=x+y;
    b=x-y;
    c=x*y;
    d=x/y;
    e=x*x;
    f=y*y*y;
    g=x%y;
    printf("x + y : %d\n",a);
    printf("x - y : %d\n",b);
    printf("x * y : %d\n",c);
    printf("x / y quotient: %d, remainder: %d\n",d,g);
    printf("x ^ 2 : %d\n",e);
    printf("y ^ 3 : %d",f);
    return 0;
}
