#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
class Point
{
public:
    Point(double a=0, double b=0):x(a),y(b)
    {
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
    Line(double a=0, double b=0, double c=0, double d=0):x1(a),y1(b),x2(c),y2(d),aa(a,b),bb(c,d)
    {
        cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is created."<<endl;
    }
    Line(Point &a, Point &b):x1(a.x),y1(a.y),x2(b.x),y2(b.y),aa(a),bb(b)
    {
        cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is created."<<endl;
    }
        Line(const Line &P):x1(P.x1),y1(P.y1),x2(P.x2),y2(P.y2)
    {
        cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is copied."<<endl;;
    }
    ~Line()
    {
        cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is erased."<<endl;
    }
    Line& setLine(double a=0, double b=0, double c=0, double d=0)
    {
        x1=a,y1=b,x2=c,y2=d;
        aa.x=a,aa.y=b,bb.x=c,bb.y=d;
        //cout<<std::setprecision(16)<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is created."<<endl;
        return *this;
    }
    Line& setLine(const Point &a,const Point &b){
        x1=a.x,y1=a.y,x2=b.x,y2=b.y;
        aa.x=a.x,aa.y=a.y,bb.x=b.x,bb.y=b.y;
        return *this;
    }
    Line& setLine(const Line &p){
        x1=p.x1,x2=p.x2,y1=p.y1,y2=p.y2;
        aa.x=p.x1,bb.x=p.x2,aa.y=p.y1,bb.y=p.y2;
        return *this;
    }
    void readLine(){
        char c;
        cin>>x1>>c>>y1>>x2>>c>>y2;
        aa.x=x1,aa.y=y1,bb.x=x2,bb.y=y2;
    }
    void show()
    {
        cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<")"<<endl;
    }
private:
    double x1,y1,x2,y2;
    Point aa,bb;
};
int main()
{
    freopen("out","w",stdout);
    int num, i;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin>>num;
    Line line[num];
    for(i = 0; i < num; i++)
    {
        line[i].readLine();
        line[i].show();
    }
    Line l1(p, q), l2(p,t), l3(q,t), l4(l1);
    l1.show();
    l2.setLine(l1).show();
    l3.show();
    l4.setLine(t,q).show();
}
