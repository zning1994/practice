#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
    char *p;
    char str[80]="computer";
    //ok
    //把hello的地址给了p
    p="hello";
    //error:str="hello";
    //上述是把hello的地址赋值给str这个数组，而数组是个常量，也就是这个语句要把str数组地址给改掉，所以非法
    //ok:
    gets(str);
    puts(str);
    //error:gets(p);puts(p);
    //上述p是个野指针，如果其被赋值的话，会出事的~~~~(>_<)~~~~
    //error:p="hello";gets(p);puts(p);
    //上述p所指向的是个常量，在gets时通过指针修改hello这个常量是非法的，因此这是错误的。
    //ok
    p=(char*)malloc(sizeof(char)*100);
    gets(p);
    puts(p);
    return 0;
}
