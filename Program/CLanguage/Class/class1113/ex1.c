#include<stdio.h>
#include<string.h>//Using strlrn strcpy strcat strcmp
int main()
{
    char str[90],str1[90];
    scanf("%s",str);
    printf("result=%s\n",str);
    gets(str1);
    puts(str1);
    //strcpy��Ŀ�괮��ԭ����;
    //strcpy(str1,"nihaohao");
    printf("%s\n",strcat(str,"wangbadan"));
    printf("%d",str);
    //strcpy(str1,str);
    //��\0����Ϊת���ַ��ǽ�������ģ���������.
    //e.g. str[80]="Computer\0Scinence",�����ʱֻ���ǰ���Computer.
    printf("%d",strlen(str1));
    return 0;
}
