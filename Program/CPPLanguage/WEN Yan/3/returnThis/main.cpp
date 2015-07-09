#include <iostream>

using namespace std;

class Clock {
    private:
        int hour, minute, second;
    public :
        Clock(int h=0, int m=0, int s=0):hour(h),minute(m),second(s){cout<<"constructor"<<endl;}
        Clock(const Clock& c):hour(c.hour),minute(c.minute),second(c.second) {cout<<"copy constructor"<<endl;}
        Clock setHour(int h);
        Clock setMinute(int m);
        Clock setSecond(int s);
		void showTime();
};

void Clock::showTime() {
	cout<<"hour: "<<hour<<", minite: "<<minute<<", second: "<<second<<endl;
}

Clock Clock::setHour(int  h) {
	this->hour = h;
	return *this;
}
Clock Clock::setMinute(int  m) {
	this->minute= m;
	return *this;
}
Clock Clock::setSecond(int  s) {
	this->second = s;
	return *this;
}

Clock f() {
    Clock c;
    return c;
}

///不能返回临时对象的引用，但是总能返回临时对象，why？

///返回对象的一个主要过程是：函数调用结束后，看当前函数的返回值是否被使用，
///如果被使用（参与运算，赋值，调用成员函数），则进行复制，到一个临时对象中，否则直接销毁

///如果要返回*this，大部分情况下需要返回该类的引用，以保证成员函数调用的正确性
int main()
{
    Clock c1;
    Clock c2 = c1;
    cout<<"~~~~~~~~~~~~~~~~~~~"<<endl;
    Clock c3 = c1.setHour(12);///对比返回临时对象的函数的情况
    Clock c4 = f();
    cout<<"------------------"<<endl;
    c1.setHour(12).setSecond(12).setMinute(12).showTime();
    cout<<"******************"<<endl;
    c1.showTime();

    return 0;
}
