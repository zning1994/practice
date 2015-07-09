#include <iostream>
using namespace std;
int n, a[25], m[25];
int Shoot(int a[], int m[], int sum, int i, int sign, int cnt)
{
    for (int j = i; j <= i + 2; j++) /** 主角每枪击毁三个相邻的阳台**/
        if (cnt == (m[j % n] += sign)) sum -= sign * a[j % n];
    return sum; /** 幸存的怪物个数**/
}
int GetDamage(int a[], int m[], int& sum, int& damage, int minium)
{
    if (sum == 0)
        return (minium < damage) ? minium : damage; /** sum: 幸存的怪物个数**/
    for (int i = 0; i < n; i++) /** 遍历幸存的阳台**/
    {
        if (m[i] != 0) continue;        /** m[i]: 第 i 个阳台被击中的次数**/
        damage += sum = Shoot(a, m, sum, i, 1, 1); /** 主角开枪后怪物还击**/
        if (minium > damage) minium = GetDamage(a, m, sum, damage, minium);
        damage -= sum;                    /** 回溯，还原主角受到的伤害(damage)**/
        sum = Shoot(a, m, sum, i, -1, 0); /** 回溯，还原阳台(m)及其上的怪物(sum)**/
    }
    return minium; /** 消灭全部怪物后主角所受到的最小伤害**/
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
