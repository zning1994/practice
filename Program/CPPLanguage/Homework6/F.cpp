#include <iostream>
#include <cstdio>
using namespace std;
class Line;
class Point
{
private:
    double xc,yc;
public:
    Point(double a=0, double b=0):xc(a),yc(b)
    {
        cout<<"Point : ("<<xc<<", "<<yc<<") is created."<<endl;
    }
    Point(const Point &p):xc(p.xc),yc(p.yc)
    {
        cout<<"Point : ("<<xc<<", "<<yc<<") is copied."<<endl;
    }
    ~Point()
    {
        cout<<"Point : ("<<xc<<", "<<yc<<") is erased."<<endl;
    }
    double x() const
    {
        return xc;
    }
    double y() const
    {
        return yc;
    }
    void showNoEndOfLine() const
    {
        cout<<"Point : ("<<xc<<", "<<yc<<")";
    }
    void show() const
    {
        cout<<"Point : ("<<xc<<", "<<yc<<")"<<endl;
    }
    friend class Line;
};
class Line
{
private:
    Point pa,pb;
public:
    Line(double a=0, double b=0, double c=0, double d=0):pa(a,b),pb(c,d)
    {
        cout<<"Line : ("<<pa.xc<<", "<<pa.yc<<") to ("<<pb.xc<<", "<<pb.yc<<") is created."<<endl;
    }
    Line(Point& p1,Point& p2):pa(p1),pb(p2)
    {
        cout<<"Line : ("<<pa.xc<<", "<<pa.yc<<") to ("<<pb.xc<<", "<<pb.yc<<") is created."<<endl;
    }
    Line(const Line &p):pa(p.pa),pb(p.pb)
    {
        cout<<"Line : ("<<pa.xc<<", "<<pa.yc<<") to ("<<pb.xc<<", "<<pb.yc<<") is copied."<<endl;
    }
    ~Line()
    {
        cout<<"Line : ("<<pa.xc<<", "<<pa.yc<<") to ("<<pb.xc<<", "<<pb.yc<<") is erased."<<endl;
    }
    void show() const
    {
        cout<<"Line : ("<<pa.xc<<", "<<pa.yc<<") to ("<<pb.xc<<", "<<pb.yc<<")"<<endl;
    }
    Line& setLine(double x1,double y1,double x2,double y2)
    {
        pa.xc=x1,pa.yc=y1;
        pb.xc=x2,pb.yc=y2;
        return *this;
    }
    Line& setLine(const Point & p1, const Point & p2)
    {
        pa=p1,pb=p2;
        return *this;
    }
    Line& setLine(const Line& p)
    {
        pa=p.pa,pb=p.pb;
        return *this;
    }
    void readLine()
    {
        char c;
        cin>>pa.xc>>c>>pa.yc>>pb.xc>>c>>pb.yc;
    }
    const Point& start() const
    {
        return pa;
    }
    const Point& end() const
    {
        return pb;
    }
    void setStart(const Point &p)
    {
        pa=p;
    }
    void setEnd(const Point &p)
    {
        pb=p;
    }
    friend void showLineCoordinate(const Line& line);
    friend void showLinePoint(const Line& line);
    friend void showLine(const Line& line);

};

//“‘œ¬ «append code
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
