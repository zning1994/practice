#include<iostream>
using namespace std;
int main()
{
    int a,b,i=1;
    cout<<"Please enter two numbers: "<<endl;
    cin>>a>>b;
    while(i<100){
        a=a+b;
        i++;
    }
    cout<<"The result of two numbers is "<<a<<endl;
    return 0;
}
