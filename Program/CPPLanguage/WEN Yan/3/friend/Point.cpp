#include "Point.h"

#include <iostream>
#include <cmath>
using namespace std;


Point::Point(Point &p) {
	X=p.X;
	Y=p.Y;
	cout<<"Point constructor"<<endl;
}

double dist(Point p1, Point p2) {
    double x = pow((p1.X-p2.X), 2);
    double y = pow((p1.Y-p2.Y), 2);
    return sqrt(x+y);
}

