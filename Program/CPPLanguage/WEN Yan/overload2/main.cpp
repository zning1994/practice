#include <iostream>
using namespace std;

void f(int i){cout<<"in f for int. "<<i<<endl;}
void f(const char*s){cout<<"in f for char*. "<<s<<endl;}
int main(){
	char c='A';	int i=1;	short s=2;
	double ff=3.4;
	char a[10]="123456789";
	f(c);             		//f(int i)   提升
	f(i);             		//f(int i)   精确匹配
	f(s);             		//f(int i)   提升
	f(ff);             		//f(int i)   转换
	f('a');            		//f(int i)   提升
	f(3);             		//f(int i)   精确匹配
	f("string");       	                //f(const char*s) 精确匹配
	f(a);            		//f(const char*s) 精确匹配
}
