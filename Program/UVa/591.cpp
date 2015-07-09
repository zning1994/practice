/***********************************
这个题的题意很简单，就是移动最少的砖让各个栈高度相同。
刚开始没仔细看题，以为可以将一个栈的砖全那光，那样的话，
就需要将栈按砖块多少排序，在一个个的试。但题目不让这样，那很简单了，
先求平均数，然后把高于平均数的加起来，和就是结果，注意，一个Case后要空一行
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
