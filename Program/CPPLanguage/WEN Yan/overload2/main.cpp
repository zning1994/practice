#include <iostream>
using namespace std;

void f(int i){cout<<"in f for int. "<<i<<endl;}
void f(const char*s){cout<<"in f for char*. "<<s<<endl;}
int main(){
	char c='A';	int i=1;	short s=2;
	double ff=3.4;
	char a[10]="123456789";
	f(c);             		//f(int i)   ����
	f(i);             		//f(int i)   ��ȷƥ��
	f(s);             		//f(int i)   ����
	f(ff);             		//f(int i)   ת��
	f('a');            		//f(int i)   ����
	f(3);             		//f(int i)   ��ȷƥ��
	f("string");       	                //f(const char*s) ��ȷƥ��
	f(a);            		//f(const char*s) ��ȷƥ��
}
