#include<iostream>
using namespace std;
bool isSwapped(int &a, int &b)
{
    int *va,*vb;
    va=&a;
    vb=&b;
    if(a==b)
        return 0;
    if(a>b)
        return 1;
    return 0;
}
int main()
{
    int a, b;
    cin >> a >> b;
    if(isSwapped(a, b))
        cout << b << " " << a << " YES";
    else
        cout << a << " " << b << " NO";
}
