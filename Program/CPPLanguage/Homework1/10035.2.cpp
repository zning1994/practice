/************************************************
因为只是统计进位，故不需保存相加结果，可以利用这一点。注意输出单复数的差别。
Primary Arithmetic （小学生算术）
************************************************/
//Wrong Answer
#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
    int a, b;
    int carry, c;///carry表示进位数
    while (scanf("%d%d", &a, &b) , a + b)
    {
        carry = c = 0;
        while (a || b) ///注意999+1的情况~
        {
            c = (a % 10 + b % 10 + c) > 9 ? 1 : 0;
            carry += c;///或者写if(c) ++carry;
            a /= 10;
            b /= 10;
        }
        if (carry == 0)
            puts("No carry operation.");
        else if (carry == 1)
            puts("1 carry operation.");
        else
            printf("%d carry operations.n", carry);
    }
    return 0;
}
