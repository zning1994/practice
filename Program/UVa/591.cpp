/***********************************
����������ܼ򵥣������ƶ����ٵ�ש�ø���ջ�߶���ͬ��
�տ�ʼû��ϸ���⣬��Ϊ���Խ�һ��ջ��שȫ�ǹ⣬�����Ļ���
����Ҫ��ջ��ש�����������һ�������ԡ�����Ŀ�����������Ǻܼ��ˣ�
����ƽ������Ȼ��Ѹ���ƽ�����ļ��������;��ǽ����ע�⣬һ��Case��Ҫ��һ��
***********************************/
#include<iostream>
#include<cstdio>
using namespace std;
int Digit[55];
int main()
{
    int n, cnt = 1, sum, hight, moves;
    while(cin>>n){
        if(!n)  break;
        sum = moves = 0;
        for(int i = 0; i < n; cin>>Digit[i++], sum += Digit[i - 1]);
        hight = sum / n;
        for(int i = 0; i < n; i++){
            if(hight > Digit[i])
                moves += (hight - Digit[i]);
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n", cnt++, moves);
    }
    return 0;
}
