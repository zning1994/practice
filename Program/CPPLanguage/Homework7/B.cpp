#include <cstdio>
#include <iostream>
#include <iomanip>
using namespace std;
class Time
{
private:
    int h,m,s;
public:
    Time()
    {
        h=0;
        m=0;
        s=0;
    }
    Time(int hs, int ms, int ss)
    {
        h=hs,m=ms,s=ss;
    }
    Time(const Time &p)
    {
        this->h=p.h;
        this->m=p.m;
        this->s=p.s;
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
    void showTime12Hour() const{
        if((h>=24||h<0)||(m>=60||m<0)||(s>=60||s<0))
            cout<<"Time error"<<endl;
        else if(h==0)
        {
            cout<<setw(2)<<setfill('0')<<h+12<<":";
            cout<<setw(2)<<setfill('0')<<m<<":";
            cout<<setw(2)<<setfill('0')<<s<<" a.m."<<endl;
        }
        else if(h>=1&&h<=11)
        {
            cout<<setw(2)<<setfill('0')<<h<<":";
            cout<<setw(2)<<setfill('0')<<m<<":";
            cout<<setw(2)<<setfill('0')<<s<<" a.m."<<endl;
        }
        else if(h==12)
        {
            cout<<setw(2)<<setfill('0')<<h<<":";
            cout<<setw(2)<<setfill('0')<<m<<":";
            cout<<setw(2)<<setfill('0')<<s<<" p.m."<<endl;
        }
        else if(h>=13&&h<=23)
        {
            cout<<setw(2)<<setfill('0')<<h-12<<":";
            cout<<setw(2)<<setfill('0')<<m<<":";
            cout<<setw(2)<<setfill('0')<<s<<" p.m."<<endl;
        }
    }
};

int main()
{
    freopen("out","w",stdout);
    cout<<"Constant test output :"<<endl;
    const Time c(11, 59, 58);
    const Time cc(12, 0, 1);
    c.showTime12Hour();
    cc.showTime12Hour();
    c.showTime();
    cc.showTime();

    cout<<"\nTest data output :"<<endl;
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
            tt.showTime12Hour();
        }
        if(i % 4 == 1)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.setTime(hour, minute, second).showTime();
        }
        if(i % 4 == 2)
            t.inputTime().showTime12Hour();
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
