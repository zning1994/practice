//预处理命令之宏定义
#include<stdio.h>
#define N 10
#define AGE unsigned int
//宏定义的函数特性：原样照搬。例如FUN(2+3)是计算2+3*2+3，而不是5*5，若计算应加()
#define FUN(x) x*x
//别忘记得加括号~smartdefrag
#define FUN2(x) ((FUN(x))/(FUN(x)))
#define FUN3(x,y,z) y=((x)*(x)),z=((x)+1)
//错误：FUN4在main调用FUN4(a)时宏定义报错
#define FUN4(x,y,z) y=((x)*(x)),z=((x)+1)
//宏定义和函数的区别：
//1、宏定义没有数据类型的问题，而函数强制有数据类型。
//2、宏定义的函数效率要高。函数调用需要栈的操作，而宏定义在预处理阶段就替换了。
//3、对函数来说，返回值仅有一个。而宏定义可以返回多个值。（见FUN3）
//缺点：1、宏定义不进行语法检查，会出现问题的
//2、定义复杂函数时不适合其用宏定义写
//3、宏名和参数表之间千万别加空格
int fun(int x)
{
    return x*x;
}
int main()
{
    int;
    return 0;
}
