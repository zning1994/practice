#ifndef LINE_H
#define LINE_H

#include "Point.h"

class Line {//�����
public:
	Line (Point xp1, Point xp2);
	Line (Line &);
	double GetLen(){return len;}
private:
	Point p1,p2;	//��ϣ�Point��Ķ���p1,p2
	double len;
};

#endif // LINE_H
