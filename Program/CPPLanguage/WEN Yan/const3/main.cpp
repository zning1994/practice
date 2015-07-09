#include <iostream>

using namespace std;

int main()
{
char * const pc="aaaa";  ///定义指针常量 ，定义时须初始化
pc="bbbb";  		     ///error，指针常量不能改变其指针值
*pc='a';      		     ///ok
*(pc+1)='b';		     ///ok
pc++='y';    		     ///error
const int b=28;
int * const pi=&b;	     ///error，pi不能变，但它所指的内存单元却可以改变，此处却将它指向了一个不可变的内存单元，即:不能将const int * 转换成int *
}
