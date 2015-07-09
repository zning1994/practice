#include <iostream>
using namespace std;

float area; ///全局变量
float fn1(float r){ ///返回值
    float temp= r*r*3.14;
    return temp; }

float& fn2(float r){
    area = r*r*3.14;
    return area; } ///返回全局变量引用

float& fn3(float r){
    float temp = r*r*3.14;
    return temp;  }  ///返回局部变量引用，会产生不可预期的错误值

int main()
{ float a=fn1(5.0);      //返回值，复制
//    float& b=fn1(5.0);   //error fn1返回的不是变量本身，而是值，需要拷贝到变量里，所以不能给引用赋值
float c=fn2(5.0);      //ok 变量的赋值
float& d=fn2(5.0);     //ok 将变量付给引用，因此和area的地址一样
//变量赋值，临时变量还未销毁，ok
float e = fn3(5.0);
//临时变量赋给引用
float& f = fn3(4.0);
cout<<"a="<<a<<endl;
cout<<"c="<<c<<endl;
cout<<"d="<<d<<endl;
cout<<"e="<<e<<endl;
//临时变量销毁，引用无效
cout<<"f="<<f<<endl;
cout<<"area="<<area<<endl;
cout<<"&a="<<&a<<endl;
cout<<"&c="<<&c<<endl;
cout<<"&d="<<&d<<endl;
cout<<"&e="<<&e<<endl;
cout<<"&f="<<&f<<endl;
cout<<"&area="<<&area<<endl;
fn2(2.4) = 7.8;
cout<<"area="<<area<<endl;
cout<<"&area="<<&area<<endl;
}
