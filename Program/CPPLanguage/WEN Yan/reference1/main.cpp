#include<iostream>
using namespace std;
int main(){
	int i=9, k=10;
	int& ir=i;

	cout<<"i= "<<i<<"    "<<"ir="<<ir<<endl;
	ir=k;
	cout<<"i= "<<i<<"    "<<"ir="<<ir<<endl;

	cout<<"i  �ĵ�ַ�ǣ�"<<&i<<endl;
	cout<<"ir �ĵ�ַ�ǣ�"<<&ir<<endl;
	cout<<"k  �ĵ�ַ�ǣ�"<<&k<<endl;

	ir=20;
	cout<<"i="<<i<<"    "<<"ir="<<ir<<endl;
	i=12;
	cout<<"i="<<i<<"    "<<"ir="<<ir<<endl;

	cout<<"i  �ĵ�ַ�ǣ�"<<&i<<endl;
	cout<<"ir �ĵ�ַ�ǣ�"<<&ir<<endl;
}
