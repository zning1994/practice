#include <iostream>

using namespace std;

void swap(int& a,int& b) {
	int temp=a;
	a=b;
	b=temp;
}
int main(){
	int x=5;
	int y=10;
	swap(x,y);
	std::cout<<"x="<<x<<"\ty="<<y<<endl;
}
