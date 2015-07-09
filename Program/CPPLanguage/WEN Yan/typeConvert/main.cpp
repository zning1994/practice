#include <iostream>

using namespace std;

int max(int a, int b) {return a>b?a:b;}
int min(double a, double b) {return a<b?a:b;}

int main()
{
    int ival=0;
    ival=3.54+3;
    cout<<ival<<endl;

    int ma = max(3.3, 2.2);
    cout<<ma<<endl;

    int mi = min(3.3, 2.2);
    cout<<mi<<endl;

}
