/************************************************
��Ϊֻ��ͳ�ƽ�λ���ʲ��豣����ӽ��������������һ�㡣ע������������Ĳ��
Primary Arithmetic ��Сѧ��������
************************************************/
//Wrong Answer
#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
    int a, b;
    int carry, c;///carry��ʾ��λ��
    while (scanf("%d%d", &a, &b) , a + b)
    {
        carry = c = 0;
        while (a || b) ///ע��999+1�����~
        {
            c = (a % 10 + b % 10 + c) > 9 ? 1 : 0;
            carry += c;///����дif(c) ++carry;
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
