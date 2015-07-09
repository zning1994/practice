#include <iostream>

using namespace std;

#include<iostream>
using namespace std;

namespace ns1{
    int i=1;

	class A {
    private:
        int i; ///内层覆盖外层，此处ns1内的变量i不可见
    public:
        A(int j=5) : i(j) {}
        void p() {cout<<"ns1::A::i    "<<i<<endl;}
        void f() {
            int i=3;///内层覆盖外层，此处A的成员数据i不可见
            cout<<"ns1::A::f::i    "<<i<<endl;
        }
	};

	void g(int a, int b){ cout<<"ns1::g()    "<<a<<","<<b<<endl; } /// 无关作用域的g和h的参数不需要一样
	void h(int a, int b){ cout<<"ns1::h()    "<<a<<","<<b<<endl; }

};

class A{ ///无关作用域可重名
private:
    int i;
public:
    A(int j=10):i(j){}
    void k() {cout<<"A::i  "<<i<<endl;}
};

namespace ns1 {
    int t=0;
}

int main(){
    cout<<"ns1::i    "<<ns1::i<<endl;
    ns1::A a;
    a.p();
    a.f();
    ns1::g(0,0);
    A a1;
    a1.k();
}
