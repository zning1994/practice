#include <iostream>

using namespace std;

class Clock {
    private:
        int hour, minute, second;
    public :
        Clock();
        Clock(int h, int m, int s);
        Clock(const Clock& c);
        ~Clock();
	  	void setTime(int h, int m, int s);
		void showTime();
};

void Clock::showTime() {
	cout<<"hour: "<<hour<<", minite: "<<minute<<", second: "<<second<<endl;
}

void Clock::setTime(int h, int m, int s) {///void Clock::setTime(int h=0, int m=0, int s=0) {
	this->hour = h;
	this->minute = m;
	this->second = s;
}

Clock::Clock() {
    cout<<"无参构造函数"<<endl;
    hour = minute = second = 0;
}

Clock::Clock(int h, int m, int s) {
    cout<<"带参构造函数"<<endl;
    hour = h; minute = m; second = s;
}

Clock::Clock(const Clock & c) {
    cout<<"拷贝构造函数"<<endl;
    hour = c.hour;
    minute = c.minute;
    second = c.second;
}

Clock::~Clock() {
    cout<<"析构函数"<<endl;
}

void f(Clock c) {
    cout<<"In Function f(Clock)" <<endl;
}

void g(Clock & c) {
    cout<<"In Function g(Clock &)" <<endl;
}

Clock h() {
    cout<<"In Function Clock h()" <<endl;
    return Clock();
}

int main() {
	cout<<"test 1"<<endl;
	Clock c;
//	c.hour=3;  //private不能访问
    c.showTime(); //public 可访问
	c.setTime(11,0,0);
	c.showTime();

    Clock c1(12,0,0);
    c1.showTime();

    cout<<endl<<"test 2"<<endl;
    Clock* pc = &c;
    Clock* pc1 = new Clock;
    Clock* pc2 = new Clock();
    Clock* pc3 = new Clock(1,2,3);
    pc3->showTime();
    delete pc1;
    delete pc2;
    delete pc3;

    cout<<endl<<"test 3"<<endl;
    Clock c2(c1);
    Clock c3 = c1;
    f(c2);
    g(c2);
    Clock c4 = h();

    cout<<endl<<"test 4"<<endl;
    Clock arr[3];
    Clock arr2[3] = {Clock(1,2,3),Clock(4,5,6),Clock(7,8,9)};
    Clock *parr = new Clock[3];
    delete [] parr;


    cout<<endl<<"test end"<<endl;
	return 0;
}
