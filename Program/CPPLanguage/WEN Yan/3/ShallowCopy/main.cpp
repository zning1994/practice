#include <iostream>
#include <cstring>

using namespace std;

class Student
{
public:
    Student(int n=0, int a=0, char * nm=NULL)      /// 构造函数，堆中分配空间
    {
        number = n;
        age = a;
        name = new char[20];
        if (nm!=NULL)
            strcpy(name, nm);
    }
    ~Student()     /// 析构函数，释放动态分配的空间
    {
        delete [] name;
    }
    Student (const Student& s) {
        number = s.number;
        age = s.age;
        name = new char[20];
        if (s.name != NULL) {
            strcpy(name, s.name);
        }
    }
    void print() {
        cout<<"number: "<<number<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"name: "<<name<<endl;
    }
private:
    int number;
    int age;
    char *name;     /// 指针成员
};

int main()
{
    Student stu1(1111,20,"abc");
    stu1.print();
    Student stu2(stu1);   // 复制对象
    stu2.print();
    return 0;
}
