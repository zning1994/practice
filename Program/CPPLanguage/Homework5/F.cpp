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
    double x()const{return xp;}
    double y()const{return yp;}
    double x(double a){xp=a;return xp;}
    double y(double b){yp=b;return yp;}
    double getX(){return xp;}
    double getY(){return yp;}
    double setX(double a){xp=a;return a;}
    double setY(double b){yp=b;return b;}
    Point& setPoint(double a, double b){xp=a;yp=b;return *this;}
    void show()const
    {
        cout<<"Point["<<num<<"] : ("<<setprecision(16)<<xp<<", "<<yp<<")"<<endl;
        //total++;
    }//方法：按输出格式输出Point对象。
    static void showSumOfPoint()
    {
        cout<<"In total : "<<sum<<" points."<<endl;
    }//方法：按格式输出程序运行至当前存在过的Point对象总数。
    bool isEqual(const Point &p) const{
        if(p.xp==this->xp&&p.yp==this->yp)
            return true;
        else return false;
    }
    //方法：判断传入的参数与对象的坐标是否相同，相同返回true。
    Point& copy(const Point &p){
        this->xp=p.xp;
        this->yp=p.yp;
        return *this;
    }//方法：传参数复制给对象。

//方法，有两个版本：不传参数则将对象自身的x坐标和y坐标互换；
//若将Point对象做参数传入，则将传入对象的坐标交换复制给对象自身，不修改参数的值。
    Point& inverse(){
        double temp=this->xp;
        this->xp=this->yp;
        this->yp=temp;
        return *this;
    }
    Point& inverse(const Point &p){
        this->xp=p.yp;
        this->yp=p.xp;
        return *this;
    }
    friend void ShowPoint(const Point &p);
    friend void ShowPoint(const double x,const double y);
    friend void ShowPoint(Point &p, const double x,const double y);
};
int Point::total=0;
int Point::sum=0;
void ShowPoint(const Point &p)
{
    cout<<std::setprecision(16)<<"Point : ("<<p.x()<<", "<<p.y()<<")"<<endl;
}
void ShowPoint(const double x,const double y)
{
    cout<<std::setprecision(16)<<"Point : ("<<x<<", "<<y<<")"<<endl;
}
void ShowPoint(Point &p, const double x,const double y)
{
    cout<<std::setprecision(16)<<"Point : ("<<p.x(x)<<", "<<p.x(y)<<")"<<endl;
}
int main()
{
    freopen("out","w",stdout);
    int l(0);
    char c;
    double a, b;
    Point p, q, pt[60];
    while(std::cin>>a>>c>>b)
    {
        if(a == b)
            p.copy(pt[l].setPoint(a, b));
        if(a > b)
            p.copy(pt[l].setPoint(a, b).inverse());
        if(a < b)
            p.inverse(pt[l].setPoint(a, b));
        if(a < 0)
            q.copy(p).inverse();
        if(b < 0)
            q.inverse(p).copy(pt[l]);
        pt[l++].show();
        p.show();
    }
    q.show();
    cout<<"==========gorgeous separator=========="<<endl;
    double x(0), y(0);
    for(int i = 0; i < l; i++)
        x += pt[i].x(), y -= pt[i].y();
    pt[l].x(y), pt[l].y(x);
    q.copy(pt[l]).show();
    for(int i = 0; i <= l; i++)
        pt[i].show();
    cout<<"==========gorgeous separator=========="<<endl;
    const Point const_point(3, 3);
    const_point.show();
    for(int i = 0; i <= l; i++)
    {
        if(const_point.isEqual(pt[i]))
        {
            ShowPoint(const_point);
            ShowPoint(const_point.x(), const_point.y());
            ShowPoint(Point(const_point.x(), const_point.y()));
        }
    }
    const_point.showSumOfPoint();
}
