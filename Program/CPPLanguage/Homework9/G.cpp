#include <iostream>
#include <cstdio>
using namespace std;
class Point{
protected:
    double X,Y;
    static int total;
public:
    Point():X(0),Y(0){total++;}
    Point(double a,double b):X(a),Y(b){total++;}
    double x(){return X;}
    double x(int a){X=a;return X;}
    double y(int b){Y=b;return Y;}
    double y(){return Y;}
    void showPoint()const{
        cout<<"2D Point ("<<X<<","<<Y<<")"<<endl;
    }
    static int showNumber(){
        return total;
    }
};
class Point_3D : public Point
{
public:
    Point_3D() : Point(0,0),z_(0) { ++st_sum_of_object; }
    Point_3D(double x, double y, double z) : Point(x,y),z_(z) { ++st_sum_of_object; }
public:
    inline double z() const
    {
        return z_;
    }
    inline double z(double pz)
    {
        z_=pz;
        return z_;
    }
    inline Point_3D& setPoint(double x, double y, double z)
    {
        this->z_=z;
        this->X=x;
        this->Y=y;
        return *this;
    }
    inline void showPoint() const
    {
        cout<<"3D Point ("<<X<<","<<Y<<","<<z_<<")"<<endl;
    }
public:
    inline static int showNumber()
    {
        return st_sum_of_object;
    }
private:
    double z_;
    static int st_sum_of_object;
};
int Point_3D::st_sum_of_object=0;
int Point::total=0;

int main()
{
    freopen("out","w",stdout);
    cout<<"Invariable test output :"<<endl;
    Point_3D p3d;
    p3d.setPoint(-100, 0, 100);
    p3d.showPoint();
    p3d.x(0);
    p3d.y(100);
    cout<<"Point ("<<p3d.x()<<","<<p3d.y()<<","<<p3d.z()<<")"<<endl;
    cout<<"\nTest data output :"<<endl;
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; i++)
    {
        double x, y, z;
        int point_type;
        cin>>point_type;
        if(point_type == 2)
        {
            cin>>x>>y;
            Point p(x, y);
            p.showPoint();
        }
        if(point_type == 3)
        {
            cin>>x>>y>>z;
            Point_3D p(x, y, z);
            p.showPoint();
        }
    }
    cout<<"Number of 2D Points : "<<Point::showNumber() - Point_3D::showNumber()<<endl;
    cout<<"Number of 3D Points : "<<Point_3D::showNumber() - 1<<endl;
}
