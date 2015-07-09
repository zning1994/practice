#include <iostream>

using namespace std;

class Clock{
private:
    int hour,minute,second;
public:
    Clock(int h,int m,int s);
    Clock& operator++();
    Clock operator++(int);
    void display();
};
Clock::Clock(int h,int m,int s):hour(h),minute(m),second(s) {
    if(hour>=24) hour=0;               	///若初始小时超过24，重置为0
    if(minute>=60) minute=0;        	///若初始分钟超过60，重置为0
    if(second>=60) second=0;        	///若初始秒钟超过60，重置为0
}

Clock& Clock::operator++() {
    if(++second>=60) {
        second=0;
        if(++minute>=60){
            minute=0;
            if(++hour>=24)
                hour=0;
        }
    }
    return *this;
}


Clock Clock::operator++(int) {
    Clock c = *this;
    ++(*this);
    return c;
}

void Clock::display() {cout<<hour<<":"<<minute<<":"<<second<<endl; }

int main()
{
    Clock c1(23,59,59);
    c1.display();
    ++c1;                        	///隐式调用方式
    c1.display();
    c1.operator ++();               ///显式调用方式
    c1.display();

    Clock c2 = c1++;
    c1.display();
    c2.display();
    return 0;
}
