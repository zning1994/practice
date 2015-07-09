#include <iostream>
using namespace std;
class Animal{
protected:
    string name;
    char sex;
public:
    virtual void cry()=0;
};
class Dog : public Animal{
protected:
    string name;
    char sex;
public:
    Dog(string na, char s):name(na),sex(s){}
    void cry(){
        if(sex=='m')
            cout<<"�ҽ�"<<name<<"����һ���й����ҵĽ����ǣ���������"<<endl;
        else
            cout<<"�ҽ�"<<name<<"����һ��Ů�����ҵĽ����ǣ���������"<<endl;
    }
};
class Cat : public Animal{
protected:
    string name;
    char sex;
public:
    Cat(string na, char s):name(na),sex(s){}
    void cry(){
        if(sex=='m')
            cout<<"�ҽ�"<<name<<"����һֻ��è���ҵĽ����ǣ���������"<<endl;
        else
            cout<<"�ҽ�"<<name<<"����һֻŮè���ҵĽ����ǣ���������"<<endl;
    }
};
class Mouse : public Animal{
protected:
    string name;
    char sex;
public:
    Mouse(string na, char s):name(na),sex(s){}
    void cry(){
        if(sex=='m')
            cout<<"�ҽ�"<<name<<"����һֻ�������ҵĽ����ǣ�֨֨֨��"<<endl;
        else
            cout<<"�ҽ�"<<name<<"����һֻŮ�����ҵĽ����ǣ�֨֨֨��"<<endl;
    }
};
int main( )
{
    string nam;
    char s;
    cin>>nam>>s;
    Animal *p;
    Mouse m1(nam, s);
    p=&m1;
    p->cry();
    cin>>nam>>s;
    Mouse m2(nam, s);
    p=&m2;
    p->cry();
    cin>>nam>>s;
    Cat c1(nam, s);
    p=&c1;
    p->cry();
    cin>>nam>>s;
    Dog d1(nam, s);
    p=&d1;
    p->cry();
    return 0;
}
