#include <iostream>

using namespace std;

class Clock {
private:
    int hour,minute,second;
public:
    Clock(int h=0,int m=0,int s=0):hour(h),minute(m),second(s){cout<<"construct"<<endl;}
    friend ostream& operator<<(ostream& os, Clock& c) {
        os<<c.hour<<":"<<c.minute<<":"<<c.second<<endl;
    }
    friend Clock operator +(Clock c1, Clock c2) {cout<<"operator +"<<endl; return Clock();}
    operator int() {
        cout<<"operator int"<<endl;
        return ((hour*60+minute)*60)+second;
    }
};

int add(int c1, int c2) {
    return c1+c2;
}

int main() {
    Clock c(12,0,0), c1(6,0,0);
    int time=c;
    cout<<time<<endl;
    int time2 = 10+c1; ///10->Clock or Clock->int?
    int time3 = c1+10; ///10->Clock or Clock->int?
    cout<<add(c,c1)<<endl;
}


