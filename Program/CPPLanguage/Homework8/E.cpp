#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

class Student
{
public:
    Student(int n,const char *na,double g)
    {
        name= new char[strlen(na)+1];
        strcpy(name,na);
        num=n,grade=g;
    }
    void display()
    {
        cout<<"num:"<<num<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"score:"<<grade<<endl;
        cout<<endl;
    }
protected:
    int num;
    char *name;
    double grade;

};
class Graduate :public Student
{
private:
    double pay;
public:
    Graduate(int n,const char *na,double g,double p):Student(n,na,g)
    {
        pay=p;
    }
    void display()
    {
        cout<<"num:"<<num<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"score:"<<grade<<endl;
        cout<<"pay="<<pay;
    }
};
int main()
{
    //freopen("out","w",stdout);
    Student stud1(1001,"Li",87.5);
    Graduate grad1(2001,"Wang",98.5,563.5);
    Student *pt=&stud1;
    pt->display();
    grad1.display();
    return 0;
}
