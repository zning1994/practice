#include <iostream>
using namespace std;
int n, a[25], m[25];
int Shoot(int a[], int m[], int sum, int i, int sign, int cnt)
{
    for (int j = i; j <= i + 2; j++) /** ����ÿǹ�����������ڵ���̨**/
        if (cnt == (m[j % n] += sign)) sum -= sign * a[j % n];
    return sum; /** �Ҵ�Ĺ������**/
}
int GetDamage(int a[], int m[], int& sum, int& damage, int minium)
{
    if (sum == 0)
        return (minium < damage) ? minium : damage; /** sum: �Ҵ�Ĺ������**/
    for (int i = 0; i < n; i++) /** �����Ҵ����̨**/
    {
        if (m[i] != 0) continue;        /** m[i]: �� i ����̨�����еĴ���**/
        damage += sum = Shoot(a, m, sum, i, 1, 1); /** ���ǿ�ǹ����ﻹ��**/
        if (minium > damage) minium = GetDamage(a, m, sum, damage, minium);
        damage -= sum;                    /** ���ݣ���ԭ�����ܵ����˺�(damage)**/
        sum = Shoot(a, m, sum, i, -1, 0); /** ���ݣ���ԭ��̨(m)�����ϵĹ���(sum)**/
    }
    return minium; /** ����ȫ��������������ܵ�����С�˺�**/
}
int main()
{
    cin >> n;
    int sum = 0, damage = 0, minium = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << GetDamage(a, m, sum, damage, minium) << endl;
}
