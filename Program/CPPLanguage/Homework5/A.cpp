#include <iostream>
#include <cstring>
using namespace std;
class employee
{
private:
    static int total;
    char *name;
    int e;
public:
    employee(char *Name,int ee)
    {
        name=new char[strlen(Name)+1];
        strcpy(name,Name);
        e=ee;
        total+=ee;
    }
    static int getallsalary()
    {
        return total;
    }
};
int employee::total=0;
int main()
{
    employee e1("zhang",100);
    employee e2("wang",200);
    employee e3("li",300);
    cout<<"allsalary is "<<employee::getallsalary()<<endl;
}
