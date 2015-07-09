#include <iostream>
#include <cstring>

using namespace std;

class Student {
public:
    void print();
    Student(int n, int a, int* nm);
    ~Student();
private:
    int age;
    int number;
    char *name;
};

void Student::print() {
    cout<<"name : "<<name<<" number: "<<number<<" age: "<<age<<endl;
}

Student::Student(int n, int a, int* nm):number(n), age(a), name(nm) {
//    name = new char[20];
//    strcpy(name, nm);
}
Student::~Student() {
//    delete [] name;
}

int main()
{
    Student stu(20,11234,"ÁõÃ÷");
    stu.print();
    return 0;
}
