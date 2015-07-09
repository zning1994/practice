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
    const char* getName()      ///�������char* ��e.getName()=��wang���Ǵ����
         {return name;}         ///����e.getName()[0]=��h�� ȴ�ܹ����У����³������

private:
	char *name;
	double salary;
	void copyname(char* name) {   ///�ѳ��õĳ����װ�ɺ���
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
	}
};

int main(){
	 Employee a("��һΪ",2188.88);
	 {
	     Employee b("����",1230.07);
	     a=b;
         cout<<a.getName()<<"\t"<<a.getSalary()<<endl;
	 }
     cout<<a.getName()<<"\t"<<a.getSalary()<<endl;
}

