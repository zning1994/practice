/************************************************
��Ŀ���滻�ı��е����š�

���������⡣�ַ��滻��Ϊ�˷�ֹ�������ֱ�Ӹ�����ҳ�ϵķ��š�
************************************************/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
char str[1000];

int main()
{
	int n = 0;
	while ( gets(str) ) {
		for ( int i = 0 ; str[i] ; ++ i )
			if ( str[i] == '"' ) {
				if ( ++ n % 2 ) printf("``");
				else printf("''");
			}else printf("%c",str[i]);
		printf("\n");
	}
	return 0;
}
