#include <iostream>
#include <cstring>

using namespace std;

class Student
{
public:
    Student(int n=0, int a=0, char * nm=NULL)      /// ���캯�������з���ռ�
    {
        number = n;
        age = a;
        name = new char[20];
        if (nm!=NULL)
            strcpy(name, nm);
    }
    ~Student()     /// �����������ͷŶ�̬����Ŀռ�
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
    char *name;     /// ָ���Ա
};

int main()
{
    Student stu1(1111,20,"abc");
    stu1.print();
    Student stu2(stu1);   // ���ƶ���
    stu2.print();
    return 0;
}
