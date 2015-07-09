#include <iostream>
#include <cstdio>
using namespace std;
class Time
{
private:
    int hours,seconds,minutes;
public:
    Time()
    {
        hours=0,seconds=0,minutes=0;
    }
    Time(int h, int m, int s)
    {
        hours=h,seconds=s,minutes=m;
    }
    Time(const Time &p)
    {
        hours=p.hours,seconds=p.seconds,minutes=p.minutes;
        cout<<"There was a call to the copy constructor : "<<hours<<","<<minutes<<","<<seconds<<endl;
    }
    Time setTime(int h, int m, int s)
    {
        Time t;
        t.hours=h,t.minutes=m,t.seconds=s;
        return t;
    }
    Time setTime(const Time &p)
    {
        Time t;
        t.hours=p.hours,t.minutes=p.minutes,t.seconds=p.seconds;
        return t;
    }
    Time& getTime()
    {
        return *this;
    }
    int hour()
    {
        return hours;
    }
    int second()
    {
        return seconds;
    }
    int minute()
    {
        return minutes;
    }
    void hour(int h)
    {
        hours=h;
    }
    void second(int s)
    {
        seconds=s;
    }
    void minute(int m)
    {
        minutes=m;
    }
    Time inputTime()
    {
        Time t;
        cin>>t.hours>>t.minutes>>t.seconds;
        return t;
    }
    void showTime()
    {
        if(hours>=24||hours<0||seconds>=60||seconds<0||minutes>=60||minutes<0)
            cout<<"Time error"<<endl;
        else
            printf("%02d:%02d:%02d\n",hours,minutes,seconds);
    }
};
int main()
{
    freopen("out.txt","w",stdout);
    Time t;
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        if(i % 4 == 0)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            Time tt(hour, minute, second);
            tt.showTime();
        }
        if(i % 4 == 1)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.setTime(hour, minute, second).showTime();
        }
        if(i % 4 == 2)
            t.inputTime().showTime();
        if(i % 4 == 3)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.hour(hour);
            t.minute(minute);
            t.second(second);
            t.showTime();
        }
    }
}
