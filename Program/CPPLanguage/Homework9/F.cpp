#include <iostream>
#include <cmath>
#define PI 3.14159
using namespace std;
class Shape{
public:
    virtual double area()=0;
};

class Circle : public Shape{
private:
    double r;
public:
    Circle(double pr):r(pr){}
    double area(){
        return PI*r*r;
    }
};
class Rectangle : public Shape{
private:
    double width,heigh;
public:
    Rectangle(double pw,double ph):width(pw),heigh(ph){}
    double area(){
        return width*heigh;
    }
};
class Triangle : public Shape{
private:
    double a,b,c;
    double p;
public:
    Triangle(double pa,double pb,double pc):a(pa),b(pb),c(pc){p=(a+b+c)/2;}
    double area(){
        return sqrt(p*(p-a)*(p-b)*(p-c));
    }
};
int main()
{
    double x,y,z,r,w,h;
    int n;
    char t;
    cin>>n;
    Shape **pt = new Shape*[n];
    for (int i=0;i<n;i++) {
        cin>>t;
        switch (t) {
            case 'c':
                cin>>r;
                pt[i] = new Circle(r);
                break;
            case 'r':
                cin>>w>>h;
                pt[i] = new Rectangle(w,h);
                break;
            case 't':
                cin>>x>>y>>z;
                pt[i] = new Triangle (x,y,z);
                break;
        }
    }

    double areas=0.0;
    for(int i=0; i<n; i++)
    {
        areas=areas + pt[i]->area();
    }
    cout<<"totol of all areas="<<areas<<endl;   //输出总面积
    return 0;
}
