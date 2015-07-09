#include <iostream>

using namespace std;

class T{
public:
    T() {cout<<"T"<<endl;}
};

class Clock {
    private:
        int hour, minute, second;
        static int count;
        static T t;
    public :
        Clock(int h=0, int m=0, int s=0):hour(h),minute(m),second(s){count++;}
        Clock(const Clock& c):hour(c.hour),minute(c.minute),second(c.second){count++;}
        ~Clock(){count--;}
        static int getCount() {return count;}
		void showTime();
};

int Clock::count ;
T Clock ::t;

void Clock::showTime() {
	cout<<"hour: "<<hour<<", minite: "<<minute<<", second: "<<second<<endl;
}

int main() {
    cout<<Clock::getCount()<<endl;
    Clock c;
    Clock c1(1,2,3);
    Clock c2(c1);
    Clock *p = new Clock(1,2,3);
    Clock arr[3];

//    cout<<c.getCount()<<endl;

    delete p;

//    cout<<c.getCount()<<endl;
}
