/************************************************
题目：替换文本中的引号。

分析：简单题。字符替换，为了防止出错，最好直接复制网页上的符号。
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
