//Description
//火车可以通过 swapping 装置， 调换相邻两节车厢的位置。
//按顺序给出每节车厢的编号， 请调换火车的车厢， 使得车厢的编号升序。
//请求出最少要用到几次 swapping 装置。
//
//Type
//Sorting/Searching
//
//Analysis
//题目实则求解一段序列中的逆序对数。
//方法有很多， 况且这题 n 极小， 只要能求出逆序对数， 几乎都可以过。
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

const int MAXN = 52;

int n;
int train[MAXN];

int main()
{
    int tot_case;
    scanf("%d", &tot_case);
    while (tot_case--)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%d", &train[i]);
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
                if (train[j] > train[j + 1])
                {
                    swap(train[j], train[j + 1]);
                    ans++;
                }
        printf("Optimal train swapping takes %d swaps.\n", ans);
    }

    return 0;
}
