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
        //cout<<"There was a call to the copy constructor : "<<h<<","<<m<<","<<s<<endl;
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
    void hour(int hs)
    {
        h=hs;
    }
    void minute(int ms)
    {
        m=ms;
    }
    void second(int ss)
    {
        s=ss;
    }
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
    Time& operator+(int ss)
    {
        if((h>=24||h<0)||(m>=60||m<0)||(s>=60||s<0))
            return *this;
        this->s+=ss;
        for(int i=0;this->s>59;i++){this->s-=60;this->m+=1;}
        for(int i=0;this->m>59;i++){this->m-=60;this->h+=1;}
        for(int i=0;this->h>24;i++){this->h-=24;}
        if(h==24){this->h-=24;}
        return *this;
    }
    Time& operator-(int ss)
    {
        if((h>=24||h<0)||(m>=60||m<0)||(s>=60||s<0))
            return *this;
        this->s-=ss;
        for(int i=0;this->s<0;i++){this->s+=60;this->m-=1;}
        for(int i=0;this->m<0;i++){this->m+=60;this->h-=1;}
        for(int i=0;this->h<0;i++){this->h+=24;}
        return *this;
    }
    Time& operator+=(int ss)
    {
        *this=*this+ss;
        return *this;
    }
    Time& operator-=(int ss)
    {
        *this=*this-ss;
        return *this;
    }
    static int getNumber()
    {
        return total;
    }
    static void displayNumber()
    {
        cout<<"Now, There is "<<total<<" object of Time."<<endl;
    }
};
int Time::total=0;
int main()
{
    freopen("out","w",stdout);
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        Time t;
        t.inputTime();
        Time tt(t);
        int num;
        cin>>num;
        t += num;
        t.showTime();
        tt -= num;
        tt.showTime();
    }
}
