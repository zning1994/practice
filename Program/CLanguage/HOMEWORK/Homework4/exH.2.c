#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b, int k)
{
    int ret = 0;
    int tmp,i;

    // 双重循环判断是否包含数字k(因为时间比较紧，用这种方法效率可能不太高)
    for (i = a; i <= b; i++)
    {
        tmp = abs(i); // 绝对值对负数进行处理
        while (tmp != 0)
        {
            if (tmp % 10 == k)
            {
                ret += i;
                break;
            }

            tmp /= 10;
        }
    }

    return ret;
}

int main()
{
    int a, b, k, m, i, *ret;

    scanf("%d", &m);

    // 动态分配数组用于保存结果
    ret = (int *)malloc(sizeof(int) * m);

    // 数据输入
    i = m;
    while (i > 0)
    {
        scanf("%d %d %d", &a, &b, &k);
        ret[m - i] = sum(a, b, k); // 输入的同时计算结果并保存
        i--;
    }

    // 结果输出(用你的样例测试，能得到正确结果)
    while (i < m) printf("%d\n", ret[i++]);

    free(ret); // 释放内存

    return 0;
}
