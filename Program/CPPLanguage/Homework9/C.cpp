#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
using namespace std;
class Time
{
private:
    int h,m,s;
public :
    Time(){h=m=s=0;}
    Time(const Time &p){h=p.h;m=p.m;s=p.s;}
    Time &inputTime()
    {
        cin>>h>>m>>s;
        return *this;
    }
    void showTime()
    {
        if(h<0||h>=24||m<0||m>=60||s<0||s>=60)
            printf("Time error\n");
        else
        printf("%02d:%02d:%02d\n",h,m,s);
    }
   // friend Time &operator -=(int a){};
    //friend Time &operator +=(int a){};
    Time &operator +=(int a)
{
    int hh,mm,ss;
    if(h<0||h>=24||m<0||m>=60||s<0||s>=60)
        return *this;
    else
    {
        ss=s+a;
            s=ss%60;
            mm=ss/60+m;
            m=mm%60;
            h=(h+mm/60)%24;
            return *this;
    }
}
Time &operator -=(int b)
{
    int hh,mm,ss;
    if(h<0||h>=24||m<0||m>=60||s<0||s>=60)
        return *this;
    else
        {
            ss=s-b;
            if(ss>=0)
            {
                s=ss;
                return *this;
            }
            else
                {
                    s=ss%60;
                    if(s==0)
                    {
                        mm=ss/60;
                    }
                   else if(s<0)
                   {
                    s=60+ss%60;
                    mm=m+ss/60-1;
                   }
                    if(mm>=0)
                    {
                        m=mm;
                        return *this;
                    }
                    else
                    {
                        m=mm%60;
                        if(m==0)
                        {
                            h=h+mm/60;
                        }
                        else if(m<0)
                        {
                         m=60+mm%60;
                         h=h+mm/60-1;
                        }
                        if(h>=0)
                        return *this;
                        else
                        {
                            h=24+h;
                            return *this;
                        }
                    }
                }


        }

}
};

int main()
{
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
