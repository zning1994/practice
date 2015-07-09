#include <cstdio>
#include <iostream>
#include <iomanip>
using namespace std;
class Time
{
private:
    int h,m,s;
    static int total;
public:
    Time()
    {
        h=0;
        m=0;
        s=0;
        total++;
    }
    Time(int hs, int ms, int ss)
    {
        h=hs,m=ms,s=ss;
        total++;
    }
    Time(const Time &p)
    {
        this->h=p.h;
        this->m=p.m;
        this->s=p.s;
        total++;
        cout<<"There was a call to the copy constructor : "<<h<<","<<m<<","<<s<<endl;
    }
    int hour()const
    {
        return h;
    }
    int minute()const
    {
        return m;
    }
    int second()const
    {
        return s;
    }
    void hour(int hs) {h=hs;}
    void minute(int ms) {m=ms;}
    void second(int ss) {s=ss;}
    Time& setTime(int hs,int ms,int ss)
    {
        this->h=hs;
        this->m=ms;
        this->s=ss;
        return *this;
    }
    Time& setTime(const Time &p)
    {
        this->h=p.h;
        this->m=p.m;
        this->s=p.s;
        return *this;
    }
    const Time& getTime() const
    {
        return *this;
    }
    Time& inputTime()
    {
        cin>>this->h>>this->m>>this->s;
        return *this;
    }
    void showTime()const
    {
        if((h>=24||h<0)||(m>=60||m<0)||(s>=60||s<0))
            cout<<"Time error"<<endl;
        else
        {
            cout<<setw(2)<<setfill('0')<<h<<":";
            cout<<setw(2)<<setfill('0')<<m<<":";
            cout<<setw(2)<<setfill('0')<<s<<endl;
        }
    }
    static int getNumber(){return total;}
    static void displayNumber(){cout<<"Now, There is "<<total<<" object of Time."<<endl;}
};
int Time::total=0;
int main()
{
    freopen("out","w",stdout);
    cout<<"Static member test output :"<<endl;
    Time::displayNumber();
    Time t;
    t.displayNumber();
    Time tt(t);
    tt.displayNumber();
    Time ttt(1, 2, 3);
    ttt.displayNumber();
    Time tttt(ttt.getTime());
    tttt.displayNumber();
    int non_cases = Time::getNumber();

    cout<<"\nTest data output :"<<endl;
    int hour, minute, second;
    while(cin>>hour>>minute>>second)
    {
        Time t;
        t.setTime(hour, minute, second).showTime();
    }
    cout<<t.getNumber() - non_cases<<endl;
}
