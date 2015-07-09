#include <iostream>
#include <iomanip>
using namespace std;
class Time{
private:
    int hours,seconds,minutes;
public:
//    Time(){
//        hours=h,seconds=s,minutes=m;
//    }
    int hour(){return hours;}
    int second(){return seconds;}
    int minute(){return minutes;}
    void hour(int h){hours=h;}
    void second(int s){seconds=s;}
    void minute(int m){minutes=m;}
};
int main()
{
    Time t;
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        int hour, minute, second;
        cin>>hour>>minute>>second;
        t.hour(hour);
        t.minute(minute);
        t.second(second);
        cout<<setw(2)<<setfill('0')<<t.hour()<<":";
        cout<<setw(2)<<setfill('0')<<t.minute()<<":";
        cout<<setw(2)<<setfill('0')<<t.second()<<endl;
    }
}
