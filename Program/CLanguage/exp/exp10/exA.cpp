#include<iostream>
using namespace std;
bool isSwapped(int & a, int & b)
{
    int *temp,*va,*vb;
    va=&a;
    vb=&b;
    if(*va==*vb)
        return false;
    else if(*va>*vb)
    {
        *temp=a;
        a=b;
        b=*temp;
        return true;
    }
    return false;
}
int main()
{
    int a, b;
    cin >> a >> b;
    if(isSwapped(a, b))
        cout << a << " " << b << " YES";
    else
        cout << a << " " << b << " NO";
}
