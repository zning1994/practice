#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
bool isPrimer(int n)
{
    int i;
    if(n==2)return true;
    if(n==0||n==1)return false;
    if(n % 2 == 0)
        return false;
    for(i=3; i<=sqrt((double)n); i+=2)
        if(n % i == 0)
            return false;
    return true;
}
int main()
{
    freopen("out.txt","w",stdout);
    int num;
    while(cin >> num)
        cout << (isPrimer(num) ? "YES" : "NO");
    return 0;
}
