#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
class Point
{
private:
    static int total;
    static int sum;
    double xp,yp;
    int num;
public:
    Point(){xp=0,yp=0;sum++;num=sum;total++;}
    Point(double a){xp=a,yp=a;sum++;num=sum;total++;}
    Point(double a,double b)
    {
        xp=a,yp=b;
        sum++;
        num=sum;
        total++;
    }
    Point(const Point &p)
    {
        xp=p.xp,yp=p.yp;
        sum++;
        num=sum;
        total++;
    }
    ~Point()
    {
        total--;
    }
    double x(){return xp;}
    double y(){return yp;}
    double x(double a){xp=a;return xp;}
    double y(double b){yp=b;return yp;}
    double getX(){return xp;}
    double getY(){return yp;}
    double setX(double a){xp=a;return a;}
    double setY(double b){yp=b;return b;}
    Point& setPoint(double a, double b){xp=a;yp=b;return *this;}
    void show()
    {
        cout<<"Point["<<num<<"] : ("<<setprecision(16)<<xp<<", "<<yp<<")"<<endl;
        //total++;
    }//方法：按输出格式输出Point对象。
    static void showSumOfPoint()
    {
        cout<<"In total : "<<sum<<" points."<<endl;
    }//方法：按格式输出程序运行至当前存在过的Point对象总数。
};
int Point::total=0;
int Point::sum=0;
void ShowPoint(Point p)
{
    cout<<std::setprecision(16)<<"Point : ("<<p.x()<<", "<<p.y()<<")"<<endl;
}

void ShowPoint(double x, double y)
{
    Point p(x, y);
    cout<<std::setprecision(16)<<"Point : ("<<p.x()<<", "<<p.y()<<")"<<endl;
}

void ShowPoint(Point &p, double x, double y)
{
    cout<<std::setprecision(16)<<"Point : ("<<p.x(x)<<", "<<p.x(y)<<")"<<endl;
}

int main()
{
    freopen("out","w",stdout);
    int l(0);
    char c;
    double a, b;
    Point pt[60];
    while(std::cin>>a>>c>>b)
    {
        if(a == b)
            ShowPoint(pt[l].setPoint(a, b));
        if(a > b)
            ShowPoint(a, b);
        if(a < b)
            ShowPoint(pt[l], a, b);
        l++;
    }
    Point p(a), q(b);
    ShowPoint(q);
    double x(0), y(0);
    for(int i = 0; i < l; i++)
        x += pt[i].getX(), y -= pt[i].getY();
    ShowPoint(pt[l].setX(x), pt[l].setY(y));
    cout<<"==========gorgeous separator=========="<<endl;
    for(int i = 0; i <= l; i++)
        pt[i].show();
    q.setPoint(q.x() - p.x() + a, q.y() - p.y() + b).show();
    q.show();
    cout<<"==========gorgeous separator=========="<<endl;
    p.showSumOfPoint();
}
