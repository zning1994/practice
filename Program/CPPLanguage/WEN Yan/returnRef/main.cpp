#include <iostream>
using namespace std;

float area; ///ȫ�ֱ���
float fn1(float r){ ///����ֵ
    float temp= r*r*3.14;
    return temp; }

float& fn2(float r){
    area = r*r*3.14;
    return area; } ///����ȫ�ֱ�������

float& fn3(float r){
    float temp = r*r*3.14;
    return temp;  }  ///���ؾֲ��������ã����������Ԥ�ڵĴ���ֵ

int main()
{ float a=fn1(5.0);      //����ֵ������
//    float& b=fn1(5.0);   //error fn1���صĲ��Ǳ�����������ֵ����Ҫ��������������Բ��ܸ����ø�ֵ
float c=fn2(5.0);      //ok �����ĸ�ֵ
float& d=fn2(5.0);     //ok �������������ã���˺�area�ĵ�ַһ��
//������ֵ����ʱ������δ���٣�ok
float e = fn3(5.0);
//��ʱ������������
float& f = fn3(4.0);
cout<<"a="<<a<<endl;
cout<<"c="<<c<<endl;
cout<<"d="<<d<<endl;
cout<<"e="<<e<<endl;
//��ʱ�������٣�������Ч
cout<<"f="<<f<<endl;
cout<<"area="<<area<<endl;
cout<<"&a="<<&a<<endl;
cout<<"&c="<<&c<<endl;
cout<<"&d="<<&d<<endl;
cout<<"&e="<<&e<<endl;
cout<<"&f="<<&f<<endl;
cout<<"&area="<<&area<<endl;
fn2(2.4) = 7.8;
cout<<"area="<<area<<endl;
cout<<"&area="<<&area<<endl;
}
