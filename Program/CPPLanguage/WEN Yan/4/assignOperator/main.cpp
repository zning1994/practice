#include <iostream>

using namespace std;

class X{
public:
    X & operator= (const X & x) {
        cout << "=����"<<endl;
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
    obj1 = obj2;                   //��ʽ�������ء�=��
    obj1.operator= (obj2);       //��ʽ�������ء�=��
    obj3 = 1;                            //���ù��캯����������
                                              //ת����Ȼ��������ء�=��
}
