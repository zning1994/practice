#include <iostream>

using namespace std;

class Clock {
    private:
        int hour, minute, second;
    public :
	  	void setTime(int h, int m, int s);
		void showTime();
		Clock(int h=0, int m=0, int s=0);
		~Clock();
};

void Clock::showTime() {
	cout<<"hour: "<<hour<<", minite: "<<minute<<", second: "<<second<<endl;
}

void Clock::setTime(int h, int m, int s) {///void Clock::setTime(int h=0, int m=0, int s=0) {
	this->hour = h;
	this->minute = m;
	this->second = s;
}

Clock::Clock(int h, int m, int s) : hour(h),minute(m), second(s) {
    cout<<"构造函数";
    showTime();
}

Clock::~Clock() {
    cout<<"析构函数";
    showTime();
}

void f() {
    Clock c1(7,8,9);
    static Clock c2(15,16,17);
}

Clock g(10,11,12);
int main() {

	Clock c(1,2,3);
//    Clock* pc1 = new Clock(4,5,6);
//    delete pc1;
    f();

	return 0;
}
