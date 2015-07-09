#include <iostream>
#include <cmath>

using namespace std;

double mypower(double value, double exp=2);//声明时定义默认值

int main(){
	cout<<mypower(5)<<endl; 	//采用默认参数
	cout<<mypower(5,3)<<endl;
}

double mypower(double value, double exp) {//函数定义时无需再定义默认值
	return pow(value, exp);
}
