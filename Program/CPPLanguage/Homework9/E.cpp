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
            cout<<"我叫"<<name<<"，是一条男狗，我的叫声是：汪汪汪！"<<endl;
        else
            cout<<"我叫"<<name<<"，是一条女狗，我的叫声是：汪汪汪！"<<endl;
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
            cout<<"我叫"<<name<<"，是一只男猫，我的叫声是：喵喵喵！"<<endl;
        else
            cout<<"我叫"<<name<<"，是一只女猫，我的叫声是：喵喵喵！"<<endl;
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
            cout<<"我叫"<<name<<"，是一只男老鼠，我的叫声是：吱吱吱！"<<endl;
        else
            cout<<"我叫"<<name<<"，是一只女老鼠，我的叫声是：吱吱吱！"<<endl;
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
