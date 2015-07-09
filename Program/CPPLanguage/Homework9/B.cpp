#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class Student
{
protected:
    string name;
    int age;
    char sex;
    string major;
    string add;
    string tel;
public:
    Student(string p_name,int p_age,char p_sex,string p_major,string p_add,string p_tel)
    {
        name=p_name,major=p_major,add=p_add,age=p_age,sex=p_sex,tel=p_tel;
    }
    void show(){
        cout<<"name:"<<name<<endl<<"age"<<age<<endl<<"sex:"<<sex<<endl<<"major:"<<major<<endl<<"address:"<<add<<endl<<"tel:"<<tel<<endl;
    }
};
class Student_Cadre:public Student{
private:
    string post;
    float wage;
public:
    Student_Cadre(string p_name,int p_age,char p_sex,string p_major,string p_post,string p_add,string p_tel,float p_wage):Student(p_name,p_age,p_sex,p_major,p_add,p_tel){
        post=p_post;
        wage=p_wage;
    }
    void display(){
        Student::show();
        cout<<"post:"<<post<<endl<<"wages:"<<wage<<endl;
    }
};
int main()
{
    string name, major, post, addr, tel;
    int age;
    char sex;
    float wage;
    cin>>name>>age>>sex>>major>>post>>addr>>tel>>wage;
    Student_Cadre st_ca(name, age, sex, major, post, addr, tel, wage);
    st_ca.display( );
    return 0;
}
