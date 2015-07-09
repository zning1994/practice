///求矩阵的最大子矩阵。
///方法一（普通方法效率较低，跑了1秒多）：
#include <iostream>
#include <cstdio>
using namespace std;
int a[110][110] = {{0}};
int main()
{
    int n, i, j, k, tmp, sum;
    while (scanf("%d", &n) == 1)
    {
        for (j = 1; j <= n; j++)
            for (i = 1; i <= n; i++)
            {
                cin >> a[i][j];
                a[i][j] += a[i-1][j];
            }
        sum = a[1][1];
        for (i = 0; i <= n; i++)
            for (j = i; j <= n; j++)
            {
                tmp = 0;
                for (k = 1; k <= n; k++)
                {
                    if (tmp < 0) tmp = a[j][k] - a[i][k];
                    else if (i != j) tmp += a[j][k] - a[i][k];
                    if (tmp > sum && tmp != 0) sum = tmp;
                }
            }
        cout << sum << endl;
    }
}

