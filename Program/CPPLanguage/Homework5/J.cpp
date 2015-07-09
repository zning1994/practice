#include <iostream>
using namespace std;
class Person
{
private:
    int age;
    bool sex;
    static int num;
public:
    Person(int a,bool s)
    {
        num++;
        age=a,sex=s;
        if(!s)
            cout<<"The No."<<num<<" person, age="<<age<<",sex=F is created!"<<endl;
        else
            cout<<"The No."<<num<<" person, age="<<age<<",sex=M is created!"<<endl;
    }
    Person(const Person &p)
    {
        num++;
        age=p.age,sex=p.sex;
        if(!sex)
            cout<<"The No."<<num<<" person, age="<<age<<",sex=F is copyed!"<<endl;
        else
            cout<<"The No."<<num<<" person, age="<<age<<",sex=M is copyed!"<<endl;
    }
    Person()
    {
        num++;
        age=0,sex=0;
        if(!sex)
            cout<<"The No."<<num<<" person, age="<<age<<",sex=F is created!"<<endl;
        else
            cout<<"The No."<<num<<" person, age="<<age<<",sex=M is created!"<<endl;
    }
};
int Person::num=0;
int main()
{
    int a;
    bool s;
    cin>>a>>s;
    Person p1(a,s),p2(p1),p3,p4(p3);
    return 0;
}
