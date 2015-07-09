#include<stdio.h>
//高字节存储在高地址，取值时需要取四个字节地址最低的地址
int main()
{
    int a=0x41424344;
    printf("%x\n",&a);
    int *p=&a;
    char *q=(char *)p;
    printf("*p=%x,*q=%d\n",*p,*q);
    printf("&a=%x,q=%x\n",&a,&q);
//    short *s=(short *)p;
    q++;
    printf("*p=%x,*q=%d\n",*p,*q);
    printf("&a=%x,q=%x\n",&a,q);
    q++;
    printf("*p=%x,*q=%d\n",*p,*q);
    printf("&a=%x,q=%x\n",&a,q);
    q++;
    printf("*p=%x,*q=%d\n",*p,*q);
    printf("&a=%x,q=%x\n",&a,q);
    return 0;
}
