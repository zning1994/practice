//��Ŀ������һ������ f91(x)�ĵ��ƹ�ϵ���������x��Ӧ�ĺ���ֵ��
//
//���������⡣�����ʽ��
//
//            ��������õݹ麯�����1-1000000�Ľ����Ȼ�����ÿ�β�ѯ������ɡ�
//
//            ��ʽ������n<101ʱ��f91(n) = f91( f91(n+11) )
//
//                            �� f91(n+11) > 100��f91(n) = f91( n+1 )��
//
//                            ���� �������ƣ���˿�֪f91(100) = f91(99) {����һ�����} = ... = f91(1) = 91
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
