#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int flag=1;
class Person
{
private:
    char *name;
    int age;
public:
    Person(char *Name,int Age)
    {
        name=new char[strlen(Name)+1];
        strcpy(name,Name);
        age=Age;
        if(flag--)
        cout<<"constructor ...."<<endl;
    }
    Person(const Person &p)
    {
        name=new char[strlen(p.name)+1];
        strcpy(name,p.name);
        age=p.age;
        cout<<"Copy constructor ...."<<endl;
    }
    ~Person()
    {
        cout<<"destructor..."<<age<<endl;
    }
    void setAge(int x)
    {
        age=x;
    }
    void print()
    {
        cout<<"The Address of name: "<<name<<endl;
    }
};
int main()
{
    char abv[5]="bree";
    Person a(abv,1),b=a;
    a.setAge(1);
    b.setAge(2);
    a.print();
    b.print();
    return 0;
}
