#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
class Time{
private:
    int hours,seconds,minutes;
public:
//    Time(){
//        hours=h,seconds=s,minutes=m;
//    }
    Time inputTime(){
        Time t;
        cin>>t.hours>>t.minutes>>t.seconds;
        return t;
    }
    void showTime(){
        printf("%02d:%02d:%02d\n",hours,minutes,seconds);
    }
};
int main()
{
    Time t;
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
        t.inputTime().showTime();
}
