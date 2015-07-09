#include <iostream>
#include <cstdio>
using namespace std;
class myClass
{
  private:
    int attribute;
  public:
    myClass(int a=0){
        attribute=a;
    }
    void setAttr(int a){
        attribute=a;
    }
    void printInfo(){
        cout<<attribute<<endl;
    }
};
int main()
{
    myClass m1(10),m2;
    int a;
    m1.printInfo();
    m2.printInfo();
    cin>>a;
    m2.setAttr(a);
    m2.printInfo();
    return 0;
}
