#include<iostream>
using namespace std;

void print(double a){
    cout<<"print_d  "<<a<<endl;
}

void print(long a){
    cout<<"print_l "<<a<<endl;
}

main(){
    int a;
    print(a);		//error
    print(double(a));   	 //ok
    print(long(a));    	//ok
}
