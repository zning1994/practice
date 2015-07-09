/************************************************
题目：给出n个数，判断相邻的数字只差的绝对值序列是否是1 ~ n-1。
每相邻的两个数之间求差，若这n个数的所有的差值正好满足1~(n-1)，则输出“Jolly”，否则输出“Not Jolly”。
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
