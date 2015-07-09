#include<iostream>
using namespace std;
int compare(int &min, int &mid, int &max)
{
    if(min>mid){int temp=min;min=mid;mid=temp;}
    if(min>max){int temp=min;min=max;max=temp;}
    if(mid>max){int temp=mid;mid=max;max=temp;}
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    compare(a, b, c);
    cout << a << " " << b << " " << c;
    return 0;
}
