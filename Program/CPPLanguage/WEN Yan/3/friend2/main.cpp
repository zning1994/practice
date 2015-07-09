#include <iostream>
#include <cmath>
using namespace std;

class Point;
class Line {//�����
public:
	double dist(Point& p1, Point& p2);
private:
};

class Point {
public:
	Point(int xx=0, int yy=0) {X=xx;Y=yy;}
	Point(Point &p);
	int GetX() {return X;}
	int GetY() {return Y;}
private:
	int X,Y;
	friend double Line::dist(Point& p1, Point& p2);///��Ԫ������������ĳ�Ա����
};
Point::Point(Point &p) {
	X=p.X;
	Y=p.Y;
	cout<<"Point constructor"<<endl;
}



double Line:: dist (Point& xp1, Point& xp2) {//�����Ĺ��캯��
	cout<<"Line���캯��"<<endl;
	double x=double(xp1.X-xp2.X);
	double y=double(xp1.Y-xp2.Y);
	return sqrt(x*x+y*y);
}


int main()
{
    Line l;
    Point p1 (0,1), p2(1,1);
    l.dist(p1,p2);
}
