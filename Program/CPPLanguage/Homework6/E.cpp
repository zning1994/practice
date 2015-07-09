#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
int flag=0;
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
        if(flag!=1)
            cout<<"Point : ("<<x<<", "<<y<<") is erased."<<endl;
        else flag=0;
    }
    Point(const Point &p)
    {
        flag=1;
        x=p.x,y=p.y;
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
    Line(double a=0, double b=0, double c=0, double d=0)
    {
        x1=a,y1=b,x2=c,y2=d;
        cout<<"Point : ("<<x1<<", "<<y1<<") is created."<<endl;
        cout<<"Point : ("<<x2<<", "<<y2<<") is created."<<endl;
        cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is created."<<endl;
    }
    Line(Point a, Point b)
    {
        x2=b.x,y2=b.y,x1=a.x,y1=a.y;
        cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is created."<<endl;
    }
    Line& setLine(double a=0, double b=0, double c=0, double d=0)
    {
        x1=a,y1=b,x2=c,y2=d;
        //cout<<std::setprecision(16)<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is created."<<endl;
        return *this;
    }
    Line& setLine(const Point &a,const Point &b){
        x1=a.x,y1=a.y,x2=b.x,y2=b.y;
        return *this;
    }
    Line& setLine(const Line &p){
        x1=p.x1,x2=p.x2,y1=p.y1,y2=p.y2;
        return *this;
    }
    ~Line()
    {
        cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is erased."<<endl;
        cout<<"Point : ("<<x2<<", "<<y2<<") is erased."<<endl;
        cout<<"Point : ("<<x1<<", "<<y1<<") is erased."<<endl;
    }
    void readLine(){
        char c;
        cin>>x1>>c>>y1>>x2>>c>>y2;
    }
    void show()
    {
        cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<")"<<endl;
    }
private:
    double x1,y1,x2,y2;
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
