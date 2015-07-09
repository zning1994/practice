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
    const char* getName() {return name;}///������ص���char* ��e.getName()="what"�Ǵ���ģ�
                                        ///����e.getName()[0]='h';ȴ�ܹ����У����³������

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
    Employee *employees;          	 ///���ְ����Ϣ������
	int max;                  		 ///�����±��Ͻ�
	int size;                    	///�����е�ʵ��ְ������
public:
	SalaryManage(int max=0){
        this->max=max;
        size=0;
        employees=new Employee[max];
    }
    void add(const Employee& ee);         ///��������[]�����£�add����Ҫ
    int getSize() {return size;}
    void display();

    double& operator[] (char *name);
    Employee &operator[] (int index);
};

void SalaryManage::add(const Employee& ee) {
    employees[size++] = ee; ///����������û�ж���=
}

double& SalaryManage::operator[](char *name) {       	//����[]����������
	for(Employee* p=employees;  p<employees+size;  p++) {
		if( strcmp(p->name,name)==0)
			return p->salary;
	}
    employees[size] = Employee (name,0);
    return employees[size++]->salary;
}

Employee& SalaryManage::operator[](int index) {///�����ô�죿
    return employees[index];
}

void SalaryManage::display(){
    for(int i=0;i<size;i++)
	    cout<<employees[i].name<<"\t"<<employees[i].salary<<endl;
}

int main(){
		SalaryManage s(10);
		s.add(Employee("��һΪ",2188.88));
		s.add(Employee("����",1230.07));
		s.add(Employee("�ž���",3200.97));
        s.display();

        cout<<"---------------------"<<endl;
		s["��һΪ"]=1234.88;
		s["����"]=2345.07;
		s["����"]=2347.97;
        s.display();

        cout<<"---------------------"<<endl;
		for (int i=0; i<s.getSize(); i++) {
            cout<<s[i].getName()<<"\t"<<s[i].getSalary()<<endl;
        }

}
