#include <iostream>
using namespace std;
class Matrix{
private:
    int m,n;
public:
Matrix(int m, int n){}
Matrix(const Matrix &p):this(p){}
~Matrix
};
int main()
{
    int x, y;
    cin >>x>>y;
    Matrix d1(x,y), d2(x, y);
    cin>>d1;
    cin>>d2;
    cout<<"d1="<<endl;
    cout<<d1;
    cout<<"d2="<<endl;
    cout<<d2;
    cout<<"d1+d2="<<endl;
    Matrix d3=(d1+d2);
    cout<<d3;
    cout<<"d1-d2="<<endl;
    d3=(d1-d2);
    cout<<d3;
    cout<<"d1*d2.transform()="<<endl;
    d3=d1*d2.transform();
    cout<<d3;
    cout<<"d1"<<((d1==d2)?"==":"!=")<<"d2"<<endl;
    return 0;
}
