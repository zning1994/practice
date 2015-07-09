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

///���ܷ�����ʱ��������ã��������ܷ�����ʱ����why��

///���ض����һ����Ҫ�����ǣ��������ý����󣬿���ǰ�����ķ���ֵ�Ƿ�ʹ�ã�
///�����ʹ�ã��������㣬��ֵ�����ó�Ա������������и��ƣ���һ����ʱ�����У�����ֱ������

///���Ҫ����*this���󲿷��������Ҫ���ظ�������ã��Ա�֤��Ա�������õ���ȷ��
int main()
{
    Clock c1;
    Clock c2 = c1;
    cout<<"~~~~~~~~~~~~~~~~~~~"<<endl;
    Clock c3 = c1.setHour(12);///�Աȷ�����ʱ����ĺ��������
    Clock c4 = f();
    cout<<"------------------"<<endl;
    c1.setHour(12).setSecond(12).setMinute(12).showTime();
    cout<<"******************"<<endl;
    c1.showTime();

    return 0;
}
