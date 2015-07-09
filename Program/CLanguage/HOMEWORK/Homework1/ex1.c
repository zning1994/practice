#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,a,b;
    scanf("x = %d, y = %d",&x,&y);
    printf("x + y : %d\n",x+y);
    printf("x - y : %d\n",x-y);
    printf("x * y : %d\n",x*y);
    printf("x / y quotient: %d, remainder: %d\n",x/y,x%y);
    a=pow(x,2);
    b=pow(y,3);
    printf("x ^ 2 : %d\n",a);
    printf("y ^ 3 : %d\n",b);
    return 0;
}
