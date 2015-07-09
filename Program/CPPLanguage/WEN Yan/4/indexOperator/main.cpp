#include <iostream>
#include <cstring>

using namespace std;
class Employee{
public:
    Employee(char* name="",double salary=0):salary(salary) {///what if null
        copyname(name);
    }
    Employee(const Employee& e) :salary(e.salary){
        copyname(e.name);
    }
    ~Employee() {delete[] name; }
    Employee& operator=(const Employee& e) {
        delete[] this->name;
        copyname(e.name);
        this->salary = e.salary;
    }

    double getSalary() {return salary;}
    const char* getName() {return name;}///如果返回的是char* 则e.getName()="what"是错误的，
                                        ///但是e.getName()[0]='h';却能够运行，导致程序错误

    friend class SalaryManage;
private:
	char *name;
	double salary;
	void copyname(char* name) {
	    if (name==NULL){
            this->name = "";
            return;
	    }
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
	}
};

class SalaryManage{
private:
    Employee *employees;          	 ///存放职工信息的数组
	int max;                  		 ///数组下标上界
	int size;                    	///数组中的实际职工人数
public:
	SalaryManage(int max=0){
        this->max=max;
        size=0;
        employees=new Employee[max];
    }
    void add(const Employee& ee);         ///这个类里的[]重载下，add不需要
    int getSize() {return size;}
    void display();

    double& operator[] (char *name);
    Employee &operator[] (int index);
};

void SalaryManage::add(const Employee& ee) {
    employees[size++] = ee; ///错误出在这里，没有定义=
}

double& SalaryManage::operator[](char *name) {       	//重载[]，返回引用
	for(Employee* p=employees;  p<employees+size;  p++) {
		if( strcmp(p->name,name)==0)
			return p->salary;
	}
    employees[size] = Employee (name,0);
    return employees[size++]->salary;
}

Employee& SalaryManage::operator[](int index) {///溢出怎么办？
    return employees[index];
}

void SalaryManage::display(){
    for(int i=0;i<size;i++)
	    cout<<employees[i].name<<"\t"<<employees[i].salary<<endl;
}

int main(){
		SalaryManage s(10);
		s.add(Employee("杜一为",2188.88));
		s.add(Employee("彭燕",1230.07));
		s.add(Employee("张军民",3200.97));
        s.display();

        cout<<"---------------------"<<endl;
		s["杜一为"]=1234.88;
		s["王丽"]=2345.07;
		s["刘涛"]=2347.97;
        s.display();

        cout<<"---------------------"<<endl;
		for (int i=0; i<s.getSize(); i++) {
            cout<<s[i].getName()<<"\t"<<s[i].getSalary()<<endl;
        }

}
