#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
class Point{
public:
    Point(double a=0, double b=0){x=a,y=b;}
    void show(){cout<<"Point : ("<<x<<", "<<y<<")"<<endl;}
    friend class Line;
private:
    double x,y;
};
class Line{
public:
    Line(double a=0, double b=0, double c=0, double d=0){x1=a,y1=b,x2=c,y2=d;cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is created."<<endl;}
    Line(Point &a, Point &b){x1=a.x,y1=a.y,x2=b.x,y2=b.y;cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is created."<<endl;}
    ~Line(){cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is erased."<<endl;}
    void show(){cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<")"<<endl;}
private:
    double x1,y1,x2,y2;
};
int main()
{
    freopen("out","w",stdout);
    char c;
    int num, i;
    double x1, x2, y1, y2;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin>>num;
    for(i = 1; i <= num; i++)
    {
        std::cin>>x1>>c>>y1>>x2>>c>>y2;
        Line line(x1, y1, x2, y2);
        line.show();
    }
    Line l1(p, q), l2(p, t), l3(q, t), l4(t, q);
    l1.show();
    l2.show();
    l3.show();
    l4.show();
}
