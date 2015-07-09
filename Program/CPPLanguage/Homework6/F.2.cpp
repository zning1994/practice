#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
class Line;
class Point
{
    double X;
    double Y;
public:
    Point(double x=0,double y=0):X(x),Y(y){std::cout<<"Point : ("<<X<<", "<<Y<<") is created."<<std::endl;}
    Point(Point& p):X(p.X),Y(p.Y){std::cout<<"Point : ("<<X<<", "<<Y<<") is copied."<<std::endl;}
    void show();
    double x(){return X;}
    double y(){return Y;}
    ~Point(){std::cout<<"Point : ("<<X<<", "<<Y<<") is erased."<<std::endl;}
    friend class Line;
};
class Line
{
    Point P1;
    Point P2;
public:
    Line(double x1=0,double y1=0,double x2=0,double y2=0);
    Line(Point& p1,Point& p2);
    Line(Line& l):P1(l.P1),P2(l.P2){std::cout<<"Line : ("<<P1.X<<", "<<P1.Y<<") to ("<<P2.X<<", "<<P2.Y<<") is copied."<<std::endl;}
    void show();
    Line& setLine(double x1,double y1,double x2,double y2);
    Line& setLine(const Point & p1, const Point & p2);
    void readLine();
    Point& start();
    Point& end();
    void setStart(Point &);
    void setEnd(Point &);
    Line& setLine(const Line& l);
    ~Line(){std::cout<<"Line : ("<<P1.X<<", "<<P1.Y<<") to ("<<P2.X<<", "<<P2.Y<<") is erased."<<std::endl;}
};
void Point::show()
{
    std::cout<<"Point : ("<<X<<", "<<Y<<")"<<std::endl;
}
Line::Line(double x1,double y1,double x2,double y2):P1(x1,y1),P2(x2,y2)
{
    std::cout<<"Line : ("<<P1.X<<", "<<P1.Y<<") to ("<<P2.X<<", "<<P2.Y<<") is created."<<std::endl;
}
Line::Line(Point& p1,Point& p2):P2(p2),P1(p1)
{
    std::cout<<"Line : ("<<P1.X<<", "<<P1.Y<<") to ("<<P2.X<<", "<<P2.Y<<") is created."<<std::endl;
}
void Line::show()
{
    std::cout<<"Line : ("<<P1.X<<", "<<P1.Y<<") to ("<<P2.X<<", "<<P2.Y<<")"<<std::endl;
}
Line& Line::setLine(double x1,double y1,double x2,double y2)
{
    P1.X=x1;
    P1.Y=y1;
    P2.X=x2;
    P2.Y=y2;
    return *this;
}
Line& Line::setLine(const Point & p1, const Point & p2)
{
    P1=p1;
    P2=p2;
    return *this;
}
Line& Line::setLine(const Line& l)
{
    P1=l.P1;
    P2=l.P2;
    return *this;
}
void Line::readLine()
{
    char c;
    double x1,y1,x2,y2;
    std::cin>>P1.X>>c>>P1.Y>>P2.X>>c>>P2.Y;
}
const Point& Line::start()const//方法：取Line的起点
{
    return P1;
}
const Point& Line::end()const//方法：取Line的终点
{
    return P2;
}
void Line::setStart(Point &p)//方法：设置Line的起点
{
    P1=p;
    //return *this;
}
void Line::setEnd(Point &p)//方法：设置Line的终点
{
    P2=p;
    //return *this;
}
//以下是append code
void showLineCoordinate(const Line& line)
{
    std::cout<<"Line : ";
    std::cout<<"("<<line.start().x()<<", "<<line.start().y()<<")";
    std::cout<<" to ";
    std::cout<<"("<<line.end().x()<<", "<<line.end().y()<<")";
    std::cout<<std::endl;
}

void showLinePoint(const Line& line)
{
    std::cout<<"Line : ";
    line.start().showNoEndOfLine();
    std::cout<<" to ";
    line.end().showNoEndOfLine();
    std::cout<<std::endl;
}

void showLine(const Line& line)
{
    line.show();
}

int main()
{
    freopen("out","w",stdout);
    freopen("in","r",stdin);
    int num, i;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin>>num;
    Line line[num + 1];
    for(i = 1; i <= num; i++)
    {
        line[i].readLine();
        showLine(line[i]);
    }
    Line l1(p, q), l2(p,t), l3(q,t), l4(l1);
    showLineCoordinate(l1);
    showLinePoint(l2);
    showLinePoint(l3.setLine(l1));
    showLineCoordinate(l4.setLine(t,q));
    line[0].setStart(t);
    line[0].setEnd(q);
}
