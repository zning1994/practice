#include <iostream>
#include <iomanip>
using namespace std;
class Point
{
private:
    static int total;
    static int sum;
    double x,y;
public:
    Point(){x=0,y=0;sum++;total++;}
    Point(double a){x=a,y=a;sum++;total++;}
    Point(double a,double b)
    {
        x=a,y=b;
        sum++;
        total++;
    }
    Point(const Point &p)
    {
        x=p.x,y=p.y;
        sum++;
        total++;
    }
    ~Point()
    {
        total--;
    }
    void show()
    {
        cout<<"Point : ("<<setprecision(16)<<x<<", "<<y<<")"<<endl;
        //total++;
    }//方法：按输出格式输出Point对象。
    static void showCounter()
    {
        cout<<"Current : "<<total<<" points."<<endl;
    }//方法：按格式输出当前程序中Point对象的计数。
    static void showSumOfPoint()
    {
        cout<<"In total : "<<sum<<" points."<<endl;
    }//方法：按格式输出程序运行至当前存在过的Point对象总数。


};
void showPoint(Point &p1, Point &p2, Point &p3)
{
    p1.show();
    p2.show();
    p3.show();
}//函数：按输出格式输出Point对象，调用Point::show()方法实现。
int Point::total=0;
int Point::sum=0;
int main()
{
    char c;
    double a, b;
    Point q;
    while(std::cin>>a>>c>>b)
    {
        Point p(a, b);
        p.show();
        p.showCounter();
    }
    q.showSumOfPoint();
    Point q1(q), q2(1);
    Point::showCounter();
    showPoint(q1, q2, q);
    Point::showSumOfPoint();
}
