#include<stdio.h>
//���ֽڴ洢�ڸߵ�ַ��ȡֵʱ��Ҫȡ�ĸ��ֽڵ�ַ��͵ĵ�ַ
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
