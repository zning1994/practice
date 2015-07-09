//指向函数的指针
#include<stdio.h>
int fun()
{
    puts("this is fun");
    return 0;
}
int main()
{
//    int *fp();//你猜？
    int (*fp)();//指向函数的指针，不带参数的函数
    fp=fun;//函数名加不加&都是函数的入口地址
    (*fp)();
    return 0;
}
