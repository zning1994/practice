#include <iostream>
using namespace std;
class Person{
private:
    int age;
    bool sex;
public:
    Person(){
        age=0,sex=0;
        cout<<"A default person, age="<<age<<",sex=F is created!"<<endl;
    }
    Person(int a, bool s){
        age=a,sex=s;
        if(!s)
            cout<<"A person, age="<<a<<",sex=F is created!"<<endl;
        else
            cout<<"A person, age="<<a<<",sex=M is created!"<<endl;
    }
    Person(const Person &p){
        age=p.age,sex=p.sex;
        if(!sex)
            cout<<"A person, age="<<age<<",sex=F is copyed!"<<endl;
        else
            cout<<"A person, age="<<age<<",sex=M is copyed!"<<endl;
    }
    ~Person(){
        if(!sex)
            cout<<"The person, age="<<age<<",sex=F is destroyed!"<<endl;
        else
            cout<<"The person, age="<<age<<",sex=M is destroyed!"<<endl;
    }
};
int main()
{
    int a;
    bool s;
    cin>>a>>s;
    Person p1(a,s),p2(p1),p3;
    return 0;
}
