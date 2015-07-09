#include<stdio.h>
int fun1()
{
    puts("This is fun1");
    return 0;
}
int fun2()
{
    puts("This is fun2");
    fun1();
    return 0;
}
int main()
{
    puts("This is main");
    fun2();
    return 0;
}
