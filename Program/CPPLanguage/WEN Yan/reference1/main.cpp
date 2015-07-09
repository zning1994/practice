#include<iostream>
using namespace std;
int main(){
	int i=9, k=10;
	int& ir=i;

	cout<<"i= "<<i<<"    "<<"ir="<<ir<<endl;
	ir=k;
	cout<<"i= "<<i<<"    "<<"ir="<<ir<<endl;

	cout<<"i  的地址是："<<&i<<endl;
	cout<<"ir 的地址是："<<&ir<<endl;
	cout<<"k  的地址是："<<&k<<endl;

	ir=20;
	cout<<"i="<<i<<"    "<<"ir="<<ir<<endl;
	i=12;
	cout<<"i="<<i<<"    "<<"ir="<<ir<<endl;

	cout<<"i  的地址是："<<&i<<endl;
	cout<<"ir 的地址是："<<&ir<<endl;
}
