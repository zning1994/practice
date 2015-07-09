#include<stdio.h>
#define N 1000;
int main()
{
    char *p1,*p2;
    char a[1000],b[1000];
    printf("请输入第一个字符串：");
    scanf("%s",a);
    printf("请输入第二个字符串：");
    scanf("%s",b);
    p1=a,p2=b;
    while(*p1!='\0')
        p1++;
    while(*p2!='\0')
        *p1++=*p2++;
    *p1='\0';
    printf("结果为：%s",a);
    return 0;
}
