#include<stdio.h>
#include<string.h>//Using strlrn strcpy strcat strcmp
int main()
{
    char str[90],str1[90];
    scanf("%s",str);
    printf("result=%s\n",str);
    gets(str1);
    puts(str1);
    //strcpy（目标串，原串）;
    //strcpy(str1,"nihaohao");
    printf("%s\n",strcat(str,"wangbadan"));
    printf("%d",str);
    //strcpy(str1,str);
    //“\0”作为转义字符是结束命令的，所以慎用.
    //e.g. str[80]="Computer\0Scinence",在输出时只输出前面的Computer.
    printf("%d",strlen(str1));
    return 0;
}
