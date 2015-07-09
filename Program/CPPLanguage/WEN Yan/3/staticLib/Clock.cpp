#include <iostream>
#include "Clock.h"

using namespace std;

void Clock::showTime() {
	cout<<"hour: "<<hour<<", minite: "<<minute<<", second: "<<second<<endl;
}

void Clock::setTime(int h, int m, int s) {
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


