#include<stdio.h>
int main()
{
//    int *p;
//    *p=10;
    int a[10]= {1,2,3,4,5,6,7,8,9,10};
    int i,*p;
    p=a;
    for(i=0; i<10; i++)
        printf("%3d",a[i]);
    putchar('\n');
    //p++意味着地址加了4，也就是说，指针的自增实际上是移动到下个内存（《C++ Primer》有说）
    //与指针的值无关，与基本数据类型有关
    for(p=&a[0]; p<=&a[9]; p++)
        printf("%3d",*p);
    putchar('\n');
    for(p=a; p<=a+9; p++)
        printf("%3d",*p);
    putchar('\n');
    //错误的例子
    p=a;
    for(; a<=p+9; a++)//指针值是const，无法改变，死掉了~
        printf("%3d",*p);
    putchar('\n');
    return 0;
}
