#include <iostream>
#include <cstdio>
using namespace std;
class Point{
private:
    static int total;
    static int sum;
    double x,y;
public:
    Point(double a=0, double b=0):x(a),y(b){total++;sum++;}
    Point(const Point &p):x(p.x),y(p.y){total++;sum++;}
    ~Point(){sum--;}
    static void showCounter(){cout<<"Current : "<<sum<<" points."<<endl;}
    static void showSum(){cout<<"In total : "<<total<<" points."<<endl;}
    friend class Line;
};
class Line{
private:
    static int totalline;
    static int sumline;
    Point pa,pb;
public:
    Line(double a=0, double b=0, double c=0, double d=0):pa(a,b),pb(c,d){totalline++;sumline++;}
    Line(Point& p1,Point& p2):pa(p1),pb(p2){totalline++;sumline++;}
    Line(const Line &p):pa(p.pa),pb(p.pb){totalline++;sumline++;}
    ~Line(){sumline--;}
    void readLine()
    {
        char c;
        std::cin>>pa.x>>c>>pa.y>>pb.x>>c>>pb.y;
    }
    static void showCounter(){cout<<"Current : "<<sumline<<" lines."<<endl;}
    static void showSum(){cout<<"In total : "<<totalline<<" lines."<<endl;}
};
//Point::showCounter()方法：按格式输出当前程序中Point对象的计数。
//Point::showSum()方法：按格式输出程序运行至当前存在过的Point对象总数。
//Line::showCounter()方法：按格式输出当前程序中Line对象的计数。
//Line::showSum()方法：按格式输出程序运行至当前存在过的Line对象总数。
int Point::total=0;
int Point::sum=0;
int Line::totalline=0;
int Line::sumline=0;
int main()
{
        freopen("out","w",stdout);
    freopen("in","r",stdin);
    int num, i;
    Point p(1, -2), q(2, -1), t;
    t.showCounter();
    t.showSum();
    std::cin>>num;
    Line line[num + 1];
    for(i = 1; i <= num; i++)
    {
        Line *l1, l2;
        l1->showCounter();
        l1->showSum();
        l1 = new Line(p, q);
        line[i].readLine();
        p.showCounter();
        p.showSum();
        delete l1;
        l2.showCounter();
        l2.showSum();
        q.showCounter();
        q.showSum();
    }
    Line l1(p, q), l2(p,t), l3(q,t), l4(l1);
    Line::showCounter();
    Line::showSum();
    Point::showCounter();
    Point::showSum();
    Line *l = new Line[num];
    l4.showCounter();
    l4.showSum();
    delete[] l;
    t.showCounter();
    t.showSum();
}
