#include <iostream>
#include <cmath>
using namespace std;
int  getPower(int x,int y) //������ʽ����y<0ʱ������0
{
    if(y<0)return 0;
    else
        return pow(x,y);
}
double getPower(double x, double y)//ʵ����ʽ
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
