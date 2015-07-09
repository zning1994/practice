#include <iostream>
#include <cstring>
using namespace std;
class Person
{
protected:
    char *name;
    char *id;
    int sex; ///0:女,1:男
    int age;
public:
    Person(char *p_name,char *p_id,int p_sex,int p_age)
    {
        name=new char[strlen(p_name)+1];
        strcpy(name,p_name);
        id=new char[strlen(p_id)+1];
        strcpy(id,p_id);
        sex=p_sex,age=p_age;
    }
    void show()
    {
        if(sex==1)
            cout<<"姓名:      "<<name<<endl<<"身份证号:  "<<id<<endl<<"性别:      男"<<endl<<"年龄:      "<<age<<endl;
        else
            cout<<"姓名:      "<<name<<endl<<"身份证号:  "<<id<<endl<<"性别:      女"<<endl<<"年龄:      "<<age<<endl;
    }
    ~Person()
    {
        delete[] name;
        delete[] id;
    }
};
class Employee : public Person
{
private:
    float salary;
    char *dep;
public:
    Employee(char *p_name,char *p_id,int p_sex,int p_age,char *p_dep,float p_salary):Person(p_name,p_id,p_sex,p_age)
    {
        dep=new char[strlen(p_dep)+1];
        strcpy(dep,p_dep);
        salary=p_salary;
    }
    void show()
    {
        Person::show();
        cout<<"部门:      "<<dep<<endl<<"工资:      "<<salary<<endl;
    }
    ~Employee()
    {
        delete[] dep;
    }
};
int main()
{
    char name[30],id[40],department[30];
    int sex,age;
    float salary;
    cin>>name>>id>>sex>>age>>department>>salary;
    Employee emp(name,id,sex,age,department,salary);
    emp.show();
    return 0;
}
