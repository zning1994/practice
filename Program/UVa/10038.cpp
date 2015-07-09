/************************************************
��Ŀ������n�������ж����ڵ�����ֻ��ľ���ֵ�����Ƿ���1 ~ n-1��
ÿ���ڵ�������֮��������n���������еĲ�ֵ��������1~(n-1)���������Jolly�������������Not Jolly����
************************************************/
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

using namespace std;

int have[3003];
int data[3003];

int main()
{
    int n;
    while ( ~scanf("%d",&n) ) {
	    for ( int i = 0 ; i < n ; ++ i ) {
	    	scanf("%d",&data[i]);
	    	have[i] = 0;
		}
		for ( int i = 1 ; i < n ; ++ i )
			have[abs(data[i]-data[i-1])] = 1;
	    int sum = 0;
	    for ( int i = 1 ; i < n ; ++ i )
	    	sum += have[i];

	    if ( sum == n-1 ) printf("Jolly\n");
	    else printf("Not jolly\n");
    }
    return 0;
}
