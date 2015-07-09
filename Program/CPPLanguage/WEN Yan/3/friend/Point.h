#ifndef POINT_H
#define POINT_H

class Line;
class Point {
public:
	Point(int xx=0, int yy=0) {X=xx;Y=yy;}
	Point(Point &p);
	int GetX() {return X;}
	int GetY() {return Y;}
	friend double dist(Point p1, Point p2);
	friend class Line;
private:
	int X,Y;
};


#endif // POINT_H
