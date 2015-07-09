//返回指针的函数:exp1,string copy.
#include<stdio.h>
//error:char []fun(char *str)
//ok:
char* fun(char *str1,const char *str2)
{
    while(*str1++=*str2++);
}
int main()
{
    char s1[100],s2[100]="hello";
    fun(s1,s2);
    puts(s1);
    return 0;
}
