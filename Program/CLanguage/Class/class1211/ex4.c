//ָ������ָ��
#include<stdio.h>
int fun()
{
    puts("this is fun");
    return 0;
}
int main()
{
//    int *fp();//��£�
    int (*fp)();//ָ������ָ�룬���������ĺ���
    fp=fun;//�������Ӳ���&���Ǻ�������ڵ�ַ
    (*fp)();
    return 0;
}
