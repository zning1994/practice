#include <iostream>
#include <cmath>

using namespace std;

double mypower(double value, double exp=2);//����ʱ����Ĭ��ֵ

int main(){
	cout<<mypower(5)<<endl; 	//����Ĭ�ϲ���
	cout<<mypower(5,3)<<endl;
}

double mypower(double value, double exp) {//��������ʱ�����ٶ���Ĭ��ֵ
	return pow(value, exp);
}
