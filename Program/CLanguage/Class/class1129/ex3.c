#include<stdio.h>
int main()
{
    int a,b;
    int *p;
    a=10,b=20;
    p=&a;
    *p=40;
    printf("a=%d,b=%d,*p=%d\n",a,b,*p);
    *p=b;
    printf("a=%d,b=%d,*p=%d\n",a,b,*p);
//    *p=50;
    p=&b;
    *p=60;
    printf("a=%d,b=%d,*p=%d\n",a,b,*p);
    return 0;
}
