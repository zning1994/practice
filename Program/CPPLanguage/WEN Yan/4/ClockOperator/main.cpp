#include <iostream>

using namespace std;

class Clock{
private:
    int hour,minute,second;
public:
    Clock(int h,int m,int s);
    void tick();
    void display();
};
Clock::Clock(int h,int m,int s):hour(h),minute(m),second(s) {
    if(hour>=24) hour=0;               	///����ʼСʱ����24������Ϊ0
    if(minute>=60) minute=0;        	///����ʼ���ӳ���60������Ϊ0
    if(second>=60) second=0;        	///����ʼ���ӳ���60������Ϊ0
}

void Clock::tick() {
    if(++second>=60) {
        second=0;
        if(++minute>=60){
            minute=0;
            if(++hour>=24)
                hour=0;
        }
    }
}

void Clock::display() {cout<<hour<<":"<<minute<<":"<<second<<endl; }

int main()
{
    Clock c1(23,59,59);
    c1.display();
    c1.tick();
    c1.display();
    c1.tick();
    c1.display();

    return 0;
}
