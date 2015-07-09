#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;
class Line;
class Point
{
private:
    double x;
    double y;
public:
    void show();
    Point(double,double);
    Point(const Point &P):x(P.x),y(P.y)
    {
        cout<<"Point : ("<<x<<", "<<y<<") is copied."<<endl;
    }
    ~Point();
    friend class Line;
};
class Line
{
private:
    double x1,x2,y1,y2;
    Point p1,p2;
public:
    void show();
    Line(double,double,double,double);
    Line(Point& ,Point&);
    ~Line();
    void SetLine(double a=0, double b=0, double c=0, double d=0)
    {
        p1.x=x1=a,p1.y=y1=b,p2.x=x2=c,p2.y=y2=d;
        //cout<<std::setprecision(16)<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is created."<<endl;
    }
    friend class Point;
};
Point::Point(double x1=0.0,double y1=0.0):x(x1),y(y1)
{
    cout<<"Point : ("<<x<<", "<<y<<") is created."<<endl;
}
Point::~Point()
{
    cout<<"Point : ("<<x<<", "<<y<<") is erased."<<endl;
}
Line::Line(double x3=0,double y3=0,double x4=0,double y4=0):x1(x3),y1(y3),x2(x4),y2(y4),p1(x3,y3),p2(x4,y4)
{
    cout<<"Line : ("<<x3<<", "<<y3<<") to ("<<x4<<", "<<y4<<") is created."<<endl;
}
Line::Line(Point &p3,Point& p4):x1(p3.x),y1(p3.y),x2(p4.x),y2(p4.y),p1(p3),p2(p4)
{
    cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is created."<<endl;
}
Line::~Line()
{
    cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is erased."<<endl;
}

void Point::show()
{
    cout<<"Point : ("<<x<<", "<<y<<")"<<endl;
}
void Line::show()
{
    cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<")"<<endl;
}

int main()
{
    freopen("out","w",stdout);
    char c;
    int num, i;
    double x1, x2, y1, y2;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin>>num;
    Line line[num];
    for(i = 1; i <= num; i++)
    {
        std::cout<<"=========================\n";
        std::cin>>x1>>c>>y1>>x2>>c>>y2;
        line[i].SetLine(x1, y1, x2, y2);
        line[i].show();
    }
    std::cout<<"=========================\n";
    Line l1(p, q), l2(p, t), l3(q, t), l4(t, q);
    l1.show();
    l2.show();
    l3.show();
    l4.show();
}
