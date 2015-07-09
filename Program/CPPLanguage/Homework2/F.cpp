#include <iostream>
#include <cmath>
using namespace std;
int  getPower(int x,int y) //整型形式，当y<0时，返回0
{
    if(y<0)return 0;
    else
        return pow(x,y);
}
double getPower(double x, double y)//实型形式
{
    if(y<0)return 0;
    else
        return pow(x,(int)y);
}
int main()
{
    int a,m;
    double b;
    cin>>a>>b>>m;
    cout<<getPower(a,m)<<endl;
    cout<<getPower(b,(double)m)<<endl;
    return 0;
}
