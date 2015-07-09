#include<stdio.h>
int main()
{
    int a,*b;
    b=&a;
    a=10;
    printf("a=%d,b=%d\n",a,b);
    printf("&a=%d,&b=%d",&a,&b);
    return 0;
}
