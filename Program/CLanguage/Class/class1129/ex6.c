#include<stdio.h>
int main()
{
//    int *p;
//    *p=10;
    int a[10]= {1,2,3,4,5,6,7,8,9,10};
    int i,*p;
    p=a;
    for(i=0; i<10; i++)
        printf("%3d",a[i]);
    putchar('\n');
    //p++��ζ�ŵ�ַ����4��Ҳ����˵��ָ�������ʵ�������ƶ����¸��ڴ棨��C++ Primer����˵��
    //��ָ���ֵ�޹أ���������������й�
    for(p=&a[0]; p<=&a[9]; p++)
        printf("%3d",*p);
    putchar('\n');
    for(p=a; p<=a+9; p++)
        printf("%3d",*p);
    putchar('\n');
    //���������
    p=a;
    for(; a<=p+9; a++)//ָ��ֵ��const���޷��ı䣬������~
        printf("%3d",*p);
    putchar('\n');
    return 0;
}
