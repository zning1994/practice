/************************************************
Description
输入 X 和 Y，计算 X 和 Y 的乘积。
数据范围较大，0 <= X, Y < 10^250。

Type
Big Number

Analysis
典型高精度乘法。
直接套用高精度的模板来做。
貌似也没什么好说的。
代码虽长，但都是复制粘贴的渣渣。
（连解题报告都是复制粘贴的～）

简单的模拟了下乘法，效率不高。记得以前见过有个模板是4位相乘模拟的。
************************************************/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void add(int sum[], int c[], int n) {
    int cp = 0;
    for (int i=0; i<n; i++) {
        int tmp = sum[i] + c[i] + cp;
        sum[i] = tmp % 10;
        cp = tmp / 10;
    }
    if (cp)
        sum[n] = cp;
}

void mul(char str1[], char str2[]) {
    int a[550], b[550], c[550], sum[550];

    int l1 = strlen(str1);
    int l2 = strlen(str2);

    for (int i=0; i<l1; i++)
        a[i] = str1[l1-1-i] - '0';
    for (int i=0; i<l2; i++)
        b[i] = str2[l2-1-i] - '0';

    memset(sum, 0, sizeof (sum));
    for (int i=0; i<l1; i++) {
        memset(c, 0, sizeof (c));
        for (int j=0; j<l2; j++)
            c[i+j] = a[i]*b[j];

        add(sum, c, i+l2);  // 模拟了下乘法
    }

    int n = l1 + l2;
    while (!sum[n] && n) {
        n--;
    }

    for (int i=0; i<=n ;i++)
        str1[i] = sum[n-i] + '0';
    str1[n+1] = '\0';
}

int main() {
    char str1[550], str2[550];

    while (scanf("%s%s", str1, str2) != EOF) {

        mul(str1, str2);

        printf("%s\n", str1);
    }

    return 0;
}
