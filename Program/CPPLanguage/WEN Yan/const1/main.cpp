#include <iostream>

using namespace std;

int main()
{
	const  int  a=78;
    const  int  b=28;
    const int arr[]={1,2,3,4,5};
    int  c=18;

    const  int  *pi=&a;   ///����ָ������ָ��
    *pi=58; 	///error�������޸�ָ��ָ��ĳ���
    pi=&b;	///ok��ָ��ֵ�����޸�
    *pi=68; 	///error
    const int *pa=arr;
    *(pa+1) = 7; ///error

    pi=&c; 	///ok, ����ָ�������ַ
    *pi=88; ///error������ͨ������ָ���޸�����ָ����
    c=98; 	///ok����ͨ���������޸�������

}
