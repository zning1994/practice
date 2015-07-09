#include <iostream>

using namespace std;

class Clock {
    private:
        int hour, minute, second;
    public :
        Clock(int h=0, int m=0, int s=0);
        Clock(const Clock& c);
        ~Clock();
	  	void setTime(int h, int m, int s);
		void showTime();
};

void Clock::showTime() {
	cout<<"hour: "<<hour<<", minite: "<<minute<<", second: "<<second<<endl;
}

void Clock::setTime(int h, int m, int s) {///void Clock::setTime(int h=0, int m=0, int s=0) {
	hour = h;
	minute = m;
	second = s;
}

Clock::Clock(int h, int m, int s):hour(h),minute(m),second(s) {
    cout<<"构造函数"<<endl;
}

Clock::Clock(const Clock & c):hour(c.hour),minute(c.minute),second(c.second) {
    cout<<"拷贝构造函数"<<endl;
}

Clock::~Clock() {
    cout<<"析构函数"<<endl;
}

void f(Clock c) {

}

int main(void) {
    Clock (1,2,3);
    Clock c = Clock(4,5,6);
    c.showTime();
    f(Clock(12,12,12));
}
