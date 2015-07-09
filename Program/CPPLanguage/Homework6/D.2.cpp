#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
class Point
{
public:
    Point(double a, double b)
    {
        x=a,y=b;
        cout<<"Point : ("<<x<<", "<<y<<") is created."<<endl;
    }
    Point()
    {
        x=0,y=0;
        cout<<"Point : ("<<x<<", "<<y<<") is created."<<endl;
    }
    ~Point()
    {
        cout<<"Point : ("<<x<<", "<<y<<") is erased."<<endl;
    }
    Point(const Point &P):x(P.x),y(P.y)
    {
        cout<<"Point : ("<<x<<", "<<y<<") is copied."<<endl;
    }
    void show()
    {
        cout<<"Point : ("<<x<<", "<<y<<")"<<endl;
    }
    friend class Line;
private:
    double x,y;
};
class Line
{
public:
    Line(double a, double b, double c, double d):aa(a,b),bb(c,d)
    {
        x1=a,y1=b,x2=c,y2=d;
        cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is created."<<endl;
    }
    Line(Point &a, Point &b):x1(a.x),y1(a.y),x2(b.x),y2(b.y),aa(a),bb(b)
    {
        cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is created."<<endl;
    }
    ~Line()
    {
        cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is erased."<<endl;
    }
    void show()
    {
        cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<")"<<endl;
    }
    void SetLine(double a=0, double b=0, double c=0, double d=0)
    {
        x1=a,y1=b,x2=c,y2=d;
        //cout<<std::setprecision(16)<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is created."<<endl;
    }
private:
    double x1,y1,x2,y2;
    Point aa,bb;
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
        std::cout<<"=========================\n";
        std::cin>>x1>>c>>y1>>x2>>c>>y2;
        Line line(x1, y1, x2, y2);
        line.show();
    }
    std::cout<<"=========================\n";
    Line l1(p, q), l2(p, t), l3(q, t), l4(t, q);
    l1.show();
    l2.show();
    l3.show();
    l4.show();
}
