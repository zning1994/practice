#include <iostream>

using namespace std;

#include<iostream>
using namespace std;

namespace ns1{
    int i=1;

	class A {
    private:
        int i; ///�ڲ㸲����㣬�˴�ns1�ڵı���i���ɼ�
    public:
        A(int j=5) : i(j) {}
        void p() {cout<<"ns1::A::i    "<<i<<endl;}
        void f() {
            int i=3;///�ڲ㸲����㣬�˴�A�ĳ�Ա����i���ɼ�
            cout<<"ns1::A::f::i    "<<i<<endl;
        }
	};

	void g(int a, int b){ cout<<"ns1::g()    "<<a<<","<<b<<endl; } /// �޹��������g��h�Ĳ�������Ҫһ��
	void h(int a, int b){ cout<<"ns1::h()    "<<a<<","<<b<<endl; }

};

class A{ ///�޹������������
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
