#include <iostream>
#include <cmath>
using namespace std;
void swap(int *a,int *b)
{
    int c;
    c=*a,*a=*b,*b=c;
}
void swap(int &a,int &b)
{
    int c;
    c=a,a=b,b=c;
}
void swap(double *a,double *b)
{
    double c;
    c=*a,*a=*b,*b=c;
}
void swap(double &a,double &b)
{
    double c;
    c=a,a=b,b=c;
}
int main()
{
    int x1, y1;

    cin>>x1>>y1;
    swap(&x1, &y1);
    cout<<x1<<" "<<y1<<endl;

    cin>>x1>>y1;
    swap(x1, y1);
    cout<<x1<<" "<<y1<<endl;

    double x2, y2;

    cin>>x2>>y2;
    swap(&x2, &y2);
    cout<<x2<<" "<<y2<<endl;

    cin>>x2>>y2;
    swap(x2, y2);
    cout<<x2<<" "<<y2<<endl;
}
