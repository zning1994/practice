#include <iostream>
using namespace std;
class myClass{
private:
    int ac;
    double bc;
public:
    myClass(int a=0,double b=0){
        ac=a,bc=b;
        cout<<"A new object of i="<<a<<" and d="<<b<<" is constructed."<<endl;
    }
    ~myClass(){
        cout<<"The object of i="<<ac<<" and d="<<bc<<" is deconstructed."<<endl;
    }
};
int main()
{
    int a;
    double b;
    cin>>a>>b;
    myClass m1(a,b),m2;
    return 0;
}
