#include "Point.h"
#include "Line.h"

#include <iostream>
#include <cmath>
using namespace std;

Line:: Line (Point xp1, Point xp2) :p1(xp1),p2(xp2){//�����Ĺ��캯��
	cout<<"Line���캯��"<<endl;
	double x=double(p1.X-p2.X);
	double y=double(p1.Y-p2.Y);
	len=sqrt(x*x+y*y);
}

Line:: Line (Line &Seg): p1(Seg.p1), p2(Seg.p2){//�����Ŀ������캯��
	cout<<"Line�������캯��"<<endl;
	len=Seg.len;
}
