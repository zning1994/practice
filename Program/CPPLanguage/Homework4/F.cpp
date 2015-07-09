#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
class Time
{
private:
    int hours,seconds,minutes;
public:
    Time(){
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
    Time& getTime(){
        return *this;
    }
    void showTime()
    {
        printf("%02d:%02d:%02d\n",hours,minutes,seconds);
    }
};
int main()
{
    cout<<"Copy constructor test output :"<<endl;
    Time t;
    Time tt(t);
    Time ttt(1, 2, 3);
    Time tttt(ttt.getTime());
    cout<<"\nTest data output :"<<endl;

    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        if(i % 2 == 0)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.setTime(hour, minute, second).showTime();
        }
        if(i % 2 == 1)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            Time tt(hour, minute, second);
            t.setTime(tt).showTime();
        }
    }
}
