#include <iostream>

using namespace std;

class X{
public:
    X & operator= (const X & x) {
        cout << "=重载"<<endl;
        i = x.i;
        return *this;
    };
    X (int a=0) : i(a){}
private :
    int i;
};

int main ()
{
    X obj1, obj2, obj3;
    obj1 = obj2;                   //隐式调用重载”=”
    obj1.operator= (obj2);       //显式调用重载”=”
    obj3 = 1;                            //利用构造函数进行类型
                                              //转换，然后调用重载”=”
}
