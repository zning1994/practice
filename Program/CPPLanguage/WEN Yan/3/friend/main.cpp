#include <iostream>
#include "Point.h"
#include "Line.h"
using namespace std;

class Point {
public:
	Point(int x=0, int y=0):X(x),Y(y){}
	Point(Point &p) : X(p.X),Y(p.Y){}
	int GetX() {return X;}
	int GetY() {return Y;}
private:
	int X,Y;
};

int main()
{
    Point p1 (0,0);
    Point p2 (1,1);
    return 0;
}
