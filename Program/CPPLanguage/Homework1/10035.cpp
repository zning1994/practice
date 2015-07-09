/************************************************
因为只是统计进位，故不需保存相加结果，可以利用这一点。注意输出单复数的差别。
Primary Arithmetic （小学生算术）
************************************************/
#include <iostream>
using namespace std;

int main()
{
    int first, second;

    while (cin >> first >> second, first || second)
    {
        int carry = 0;
        int counter = 0;
        while (first && second)
        {
            carry = (((first % 10 + second % 10 + carry) > 9) ? 1 : 0);
            counter += carry;
            first /= 10;
            second /= 10;
        }

        while (first)
        {
            carry = ((first % 10 + carry > 9) ? 1 : 0);
            counter += carry;
            first /= 10;
        }

        while (second)
        {
            carry = ((second % 10 + carry > 9) ? 1 : 0);
            counter += carry;
            second /= 10;
        }

        if (counter > 1)
            cout << counter << " carry operations." << endl;
        else if (counter == 1)
            cout << "1 carry operation." << endl;
        else
            cout << "No carry operation." << endl;
    }

    return 0;
}
