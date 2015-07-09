//题目：给出一个函数 f91(x)的递推关系，求出给定x对应的函数值。
//
//分析：简单题。打表，公式。
//
//            打表法：利用递归函数求出1-1000000的结果，然后根据每次查询输出即可。
//
//            公式法：当n<101时，f91(n) = f91( f91(n+11) )
//
//                            若 f91(n+11) > 100则f91(n) = f91( n+1 )，
//
//                            否则 继续递推，因此可知f91(100) = f91(99) {多了一层递推} = ... = f91(1) = 91
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int table[ 1000005 ];

int f91( int n )
{
	if ( n > 100 ) return n-10;
	else return f91( f91( n+11 ) );
}

int main()
{
	for ( int i = 1 ; i <= 1000000 ; ++ i )
		table[i] = f91( i );
	int n;
	while ( scanf("%d",&n) && n )
		printf("f91(%d) = %d\n",n,table[n]);
	return 0;
}
