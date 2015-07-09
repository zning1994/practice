#include <iostream>

using namespace std;

class Clock {
    private:
        const int aHour;
        int hour, minute, second;
    public :
        Clock(int h=0, int m=0, int s=0);
	  	void setTime(int h, int m, int s) ;
		void showTime() const ;
};

Clock::Clock(int h, int m, int s):aHour(360) {
    cout<<"带参构造函数"<<endl;
    hour = h; minute = m; second = s;
}

void Clock::showTime() const {
	cout<<"const : "<<"hour: "<<hour<<", minite: "<<minute<<", second: "<<second<<endl;
}

void Clock::setTime(int h, int m, int s) {///void Clock::setTime(int h=0, int m=0, int s=0) {
	this->hour = h;
	this->minute = m;
	this->second = s;
}

/*
void g(const Clock & c) {
    cout<<"In const Function g(Clock&)" <<endl;
}
*/
void g(Clock & c) {
    cout<<"In Function g(Clock &)" <<endl;
}

//void f(int * x){}
void f(const int * x){}
void f(int * const x){}


int main() {
}
