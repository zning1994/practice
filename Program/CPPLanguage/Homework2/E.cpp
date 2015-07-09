#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;
double area(double r=1.0)
{
    return r*r*PI;
}
int main()
{
    double r;
    cin>>r;
    cout<<area(r)<<endl;
    cout<<area()<<endl;
    return 0;
}
