// Reverse and Add ����ת��ӣ�
//
// ���ö�̬�������������ֵ�ÿһλ�������š�

#include <iostream>
#include <vector>

using namespace std;

// �ж�һ�����Ƿ��ǻ�������������ÿһλ�������ڶ�̬�����С�
bool is_palindrome_number(vector < int > digits)
{
	if (digits.size() == 1 || digits.size() == 0)
		return true;
	if (digits[0] != digits[digits.size() - 1])
		return false;

	digits.erase(digits.begin());
	digits.erase(digits.end() - 1);

	return is_palindrome_number(digits);
}

// ������ӣ��ж��Ƿ��ǻ���������������ò�����
void reverse_add(vector < int > &digits)
{
	int step = 0;

	while (!is_palindrome_number(digits))
	{
		step++;
		vector < int > sum;
		int carry = 0;
		for (int i = 0, j = digits.size() - 1; i < digits.size(); i++, j--)
		{
			int tmp = digits[i] + digits[j] + carry;
			carry = ((tmp - 10) >= 0 ? 1 : 0);
			sum.push_back(tmp % 10);
		}

		if(carry)
			sum.push_back(carry);

		digits = sum;
	}

	cout << step << " ";
	for (int i = digits.size() - 1; i >= 0; i--)
		cout << digits[i];
	cout << endl;
}

int main()
{
	int cases;
	vector < int > digits;

	cin >> cases;
	while (cases--)
	{
		int number;
		cin >> number;
		digits.clear();
		while (number)
		{
			digits.push_back(number % 10);
			number /= 10;
		}

		reverse_add(digits);
	}

	return 0;
}
