#include <iostream>

using namespace std;

int main()
{
char * const pc="aaaa";  ///����ָ�볣�� ������ʱ���ʼ��
pc="bbbb";  		     ///error��ָ�볣�����ܸı���ָ��ֵ
*pc='a';      		     ///ok
*(pc+1)='b';		     ///ok
pc++='y';    		     ///error
const int b=28;
int * const pi=&b;	     ///error��pi���ܱ䣬������ָ���ڴ浥Ԫȴ���Ըı䣬�˴�ȴ����ָ����һ�����ɱ���ڴ浥Ԫ����:���ܽ�const int * ת����int *
}
