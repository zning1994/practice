#include<stdio.h>
int main()
{
    char a[200],*p;
    int i,j;
//    printf("������һ���ַ�����");
    scanf("%s",a);
    for(i=0; a[i]!='\0'; i++);
//    printf("����Ľ���ǣ�");
printf("%d",a);
    for(p=a+i-1; p>=a; p--)
        printf("%c",*p);
    printf("\n");
    return 0;
}
