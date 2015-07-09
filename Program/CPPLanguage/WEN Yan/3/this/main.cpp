#include <iostream>

using namespace std;

class Clock {
    private:
        int hour, minute, second;
    public :
        Clock(int h=0, int m=0, int s=0);
	  	void setTime(int h, int m, int s);
        Clock& setHour(int h);
        Clock& setMinute(int m);
        Clock& setSecond(int s);
		void showTime();
};
Clock::Clock(int h, int m, int s):hour(h),minute(m),second(s) {
    cout<<"constructor"<<endl;
}

void Clock::showTime() {
	cout<<"hour: "<<hour<<", minite: "<<minute<<", second: "<<second<<endl;
}

void Clock::setTime(int h, int m, int s) {///void Clock::setTime(int h=0, int m=0, int s=0) {
	hour = h;
	minute = m;
	second = s;
}

Clock& Clock::setHour(int  h) {
	this->hour = h;
	return *this;
}
Clock& Clock::setMinute(int  m) {
	this->minute= m;
	return *this;
}
Clock Clock::setSecond(int  s) {
	this->second = s;
	return *this;
}

int main()
{
    Clock c(12,0,0);
    c.setHour(8).setMinute(10).setSecond(10);
    c.showTime();

    return 0;
}
