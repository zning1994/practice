#include <iostream>

using namespace std;

int main()
{
	const  int  a=78;
    const  int  b=28;
    const int arr[]={1,2,3,4,5};
    int  c=18;

    const  int  *pi=&a;   ///定义指向常量的指针
    *pi=58; 	///error，不能修改指针指向的常量
    pi=&b;	///ok，指针值可以修改
    *pi=68; 	///error
    const int *pa=arr;
    *(pa+1) = 7; ///error

    pi=&c; 	///ok, 可以指向变量地址
    *pi=88; ///error，不能通过常量指针修改其所指内容
    c=98; 	///ok，可通过变量来修改其内容

}
