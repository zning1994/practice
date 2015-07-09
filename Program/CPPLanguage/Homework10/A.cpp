#include <iostream>
using namespace std;
class Matrix
{
private:
    int *mat;
    int row;
    int col;
public:
    Matrix(int m, int n):row(m),col(n)
    {
        mat=new int[m*n+1];
        for(int i=0; i<row; i++)
            for(int j=0; j<col; j++)
                mat[i*col+j]=0;

    }
    Matrix(const Matrix &p):row(p.m),col(p.n)
    {
        this.mat=new int[p.m*p.n+1];
        for(int i=0; i<row; i++)
            for(int j=0; j<col; j++)
                this.mat[i*col+j]=p.mat[i*col+j];
    }
    ~Matrix()
    {
        delete [] mat;
    }
    Matrix transform()
    {
        return *this;
    }
    Matrix operator+(const Matrix &p)const
    {
        Matrix d(p.m,p.n);
        for(int i=0; i<p.m*p.n; i++)
        }
    Matrix operator-(const Matrix &p)const {}
    Matrix operator*(const Matrix &p)const {}
    Matrix& operator=(const Matrix &p) {}
    bool operator==(const Matrix &p) {}
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
