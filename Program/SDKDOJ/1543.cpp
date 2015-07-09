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
    cout<<"��p1��Բc1֮"<<((c1.locate(p1)>0)?"��":((c1.locate(p1)<0)?"��":"��"))<<endl;
    cin>>x>>y;
    Point p2(x,y);
    cout<<"��p2��Բc1֮"<<((c1.locate(p2)>0)?"��":((c1.locate(p2)<0)?"��":"��"))<<endl;
    cin>>x>>y;
    Point p3(x,y);
    cout<<"��p3��Բc1֮"<<((c1.locate(p3)>0)?"��":((c1.locate(p3)<0)?"��":"��"))<<endl;
    cout<<endl;

    Point p4,p5;
    cin>>x>>y;
    p1.setX(x);
    p1.setY(y);
    c1.crossPoints(p1, p4, p5);
    cout<<"��p1��Բc1��Բ����������Բ�������㣬�ֱ��ǣ�"<<endl;
    cout<<"����: "<<p4;
    cout<<"����: "<<p5;
    cout<<endl;


    cin>>x>>y>>w>>h;
    Rectangle r1(x,y,w,h);

    cin>>x>>y;
    p1.setX(x);
    p1.setY(y);
    cout<<"��p1�ھ���r1֮"<<((r1.locate(p1)>0)?"��":((r1.locate(p1)<0)?"��":"��"))<<endl;
    cin>>x>>y;
    p2.setX(x);
    p2.setY(y);
    cout<<"��p2�ھ���r1֮"<<((r1.locate(p2)>0)?"��":((r1.locate(p2)<0)?"��":"��"))<<endl;
    cin>>x>>y;
    p3.setX(x);
    p3.setY(y);
    cout<<"��p3�ھ���r1֮"<<((r1.locate(p3)>0)?"��":((r1.locate(p3)<0)?"��":"��"))<<endl;
    cout<<endl;

    cin>>x>>y;
    p1.setX(x);
    p1.setY(y);
    r1.crossPoints(p1, p4, p5);
    cout<<"��p1�����r1����������������ν������㣬�ֱ��ǣ�"<<endl;
    cout<<"����: "<<p4;
    cout<<"����: "<<p5;

    return 0;
}
