#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
    char *p;
    char str[80]="computer";
    //ok
    //��hello�ĵ�ַ����p
    p="hello";
    //error:str="hello";
    //�����ǰ�hello�ĵ�ַ��ֵ��str������飬�������Ǹ�������Ҳ����������Ҫ��str�����ַ���ĵ������ԷǷ�
    //ok:
    gets(str);
    puts(str);
    //error:gets(p);puts(p);
    //����p�Ǹ�Ұָ�룬����䱻��ֵ�Ļ�������µ�~~~~(>_<)~~~~
    //error:p="hello";gets(p);puts(p);
    //����p��ָ����Ǹ���������getsʱͨ��ָ���޸�hello��������ǷǷ��ģ�������Ǵ���ġ�
    //ok
    p=(char*)malloc(sizeof(char)*100);
    gets(p);
    puts(p);
    return 0;
}
