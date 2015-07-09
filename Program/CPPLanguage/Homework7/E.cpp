#include <cstdio>
#include <iostream>
#include <iomanip>
using namespace std;
class Time
{
private:
    int h,m,s;
public:
    friend istream& operator>>(istream& is,Time& t);
    friend ostream& operator<<(ostream& os,Time t);
    Time()
    {
        h=0,m=0,s=0;
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
        for(int i=0; this->s>59; i++)
        {
            this->s-=60;
            this->m+=1;
        }
        for(int i=0; this->m>59; i++)
        {
            this->m-=60;
            this->h+=1;
        }
        for(int i=0; this->h>24; i++)
        {
            this->h-=24;
        }
        if(h==24)
        {
            this->h-=24;
        }
        return *this;
    }
    Time& operator-(int ss)
    {
        if((h>=24||h<0)||(m>=60||m<0)||(s>=60||s<0))
            return *this;
        this->s-=ss;
        for(int i=0; this->s<0; i++)
        {
            this->s+=60;
            this->m-=1;
        }
        for(int i=0; this->m<0; i++)
        {
            this->m+=60;
            this->h-=1;
        }
        for(int i=0; this->h<0; i++)
        {
            this->h+=24;
        }
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
Time operator++(int)
{
    Time t=*this;
    ++(*this);
    return t;
}
Time& operator++()
{
    ++s;
    if(s==60)
    {
        m++;
        s=0;
    }
    if(m==60)
    {
        h++;
        m=0;
    }
    if(h==24)
        h=0;
    return *this;
}
Time& operator--()
{
    --s;
    if(s==-1)
    {
        m--;
        s=59;
    }
    if(m==-1)
    {
        h--;
        m=59;
    }
    if(h==-1)
        h=23;
    return *this;
}
Time operator--(int)
{
    Time t=*this;
    --(*this);
    return t;
}
};
istream& operator>>(istream& is,Time& t)
{
    is>>t.h>>t.m>>t.s;
    if(t.h<0||t.h>23||t.m<0||t.m>59||t.s<0||t.s>59)
    {
        t.h=24;
        t.m=60;
        t.s=60;
    }
    return is;
}
ostream& operator<<(ostream& os,Time t)
{
    if(t.h<0||t.h>23||t.m<0||t.m>59||t.s<0||t.s>59)
    {
        os<<"error!!!";
        return os;
    }
    os<<setfill('0')<<setw(2)<<t.h<<":"<<setw(2)<<t.m<<":"<<setw(2)<<t.s;
    return os;
}
int main()
{
    freopen("out","w",stdout);
    Time t;
    int cases;
    cin>>cases;
    cout<<setw(8)<<left<<"++t"<<" ";
    cout<<setw(8)<<left<<"--t"<<" ";
    cout<<setw(8)<<left<<"t"<<" ";
    cout<<setw(8)<<left<<"t--"<<" ";
    cout<<setw(8)<<left<<"t++"<<" ";
    cout<<setw(8)<<left<<"t"<<right<<endl;
    for(int i = 1; i <= cases; ++i)
    {
        cin>>t;
        cout<<(++t)<<" ";
        cout<<(--t)<<" ";
        cout<<t<<" ";
        cout<<t--<<" ";
        cout<<t++<<" ";
        cout<<t<<endl;
    }
}
