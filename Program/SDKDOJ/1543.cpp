#include <iostream>
#include <cmath>
using namespace std;
class Point{
protected:
    double x,y;
public:
    Point(double a, double b)x(a),y(b){}
    void setX(double a):x(a){}
    void setY(double b):y(b){}
};
class Circle{
private:
    double radius;
public:
    Circle(double a,double b,double r):Point(a,b),radius(r){}
    void setRadius(double r){this->radius=r;}
    double getRadius(){return this->radius;}
    int loate(Point t){
        if((sqrt((this->x-t.x)*(this->x-t.x)+(this->y-t.y)*(this->y-t.y))-this->radius)==0)
            return 0;
        else if((sqrt((this->x-t.x)*(this->x-t.x)+(this->y-t.y)*(this->y-t.y))-this->radius)>0)
            return -1;
        else
            return 1;
    }
    void crossPoints(Point src, Point& cp1, Point& cp2){

    }
};
class Rectangle{
private:
    double width,height;
public:
    Rectangle(double a,double b,double w, double h):Point(a,b),Point(w,h){}


};
int main( )
{
    double x,y,r,w,h;
    cin>>x>>y>>r;
    Circle c1(x,y,r);

    cin>>x>>y;
    Point p1(x,y);
    cout<<"点p1在圆c1之"<<((c1.locate(p1)>0)?"内":((c1.locate(p1)<0)?"外":"上"))<<endl;
    cin>>x>>y;
    Point p2(x,y);
    cout<<"点p2在圆c1之"<<((c1.locate(p2)>0)?"内":((c1.locate(p2)<0)?"外":"上"))<<endl;
    cin>>x>>y;
    Point p3(x,y);
    cout<<"点p3在圆c1之"<<((c1.locate(p3)>0)?"内":((c1.locate(p3)<0)?"外":"上"))<<endl;
    cout<<endl;

    Point p4,p5;
    cin>>x>>y;
    p1.setX(x);
    p1.setY(y);
    c1.crossPoints(p1, p4, p5);
    cout<<"点p1与圆c1的圆心相连，与圆交于两点，分别是："<<endl;
    cout<<"交点: "<<p4;
    cout<<"交点: "<<p5;
    cout<<endl;


    cin>>x>>y>>w>>h;
    Rectangle r1(x,y,w,h);

    cin>>x>>y;
    p1.setX(x);
    p1.setY(y);
    cout<<"点p1在矩形r1之"<<((r1.locate(p1)>0)?"内":((r1.locate(p1)<0)?"外":"上"))<<endl;
    cin>>x>>y;
    p2.setX(x);
    p2.setY(y);
    cout<<"点p2在矩形r1之"<<((r1.locate(p2)>0)?"内":((r1.locate(p2)<0)?"外":"上"))<<endl;
    cin>>x>>y;
    p3.setX(x);
    p3.setY(y);
    cout<<"点p3在矩形r1之"<<((r1.locate(p3)>0)?"内":((r1.locate(p3)<0)?"外":"上"))<<endl;
    cout<<endl;

    cin>>x>>y;
    p1.setX(x);
    p1.setY(y);
    r1.crossPoints(p1, p4, p5);
    cout<<"点p1与矩形r1的中心相连，与矩形交于两点，分别是："<<endl;
    cout<<"交点: "<<p4;
    cout<<"交点: "<<p5;

    return 0;
}
