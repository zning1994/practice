#include<stdio.h>
#define N 1000;
int main()
{
    char *p1,*p2;
    char a[1000],b[1000];
    printf("�������һ���ַ�����");
    scanf("%s",a);
    printf("������ڶ����ַ�����");
    scanf("%s",b);
    p1=a,p2=b;
    while(*p1!='\0')
        p1++;
    while(*p2!='\0')
        *p1++=*p2++;
    *p1='\0';
    printf("���Ϊ��%s",a);
    return 0;
}
