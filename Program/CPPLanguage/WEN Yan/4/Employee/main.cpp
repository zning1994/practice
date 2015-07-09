#include <iostream>
#include <cstring>
using namespace std;

class Employee{
public:
    Employee(char* name="",double salary=0):salary(salary) {
        copyname(name);
    }
    Employee(const Employee& e) :salary(e.salary){
        copyname(e.name);
    }
    ~Employee() {delete[] name; }
//    Employee& operator=(const Employee& e) {
//        delete[] this->name;
//        copyname(e.name);
//        this->salary = e.salary;
//    }
    double getSalary() {return salary;}
    const char* getName()      ///如果返回char* 则e.getName()=“wang”是错误的
         {return name;}         ///但是e.getName()[0]=‘h’ 却能够运行，导致程序错误

private:
	char *name;
	double salary;
	void copyname(char* name) {   ///把常用的程序封装成函数
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
	}
};

int main(){
	 Employee a("杜一为",2188.88);
	 {
	     Employee b("彭燕",1230.07);
	     a=b;
         cout<<a.getName()<<"\t"<<a.getSalary()<<endl;
	 }
     cout<<a.getName()<<"\t"<<a.getSalary()<<endl;
}

