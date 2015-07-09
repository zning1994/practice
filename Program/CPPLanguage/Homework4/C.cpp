#include <iostream>
#include <cstdio>
using namespace std;
class Time{
private:
    int hour,second,minute;
public:
    Time(int h, int m, int s){
        hour=h,second=s,minute=m;
    }
    void showTime(){
        printf("%02d:%02d:%02d\n",hour,minute,second);
    }
};
int main()
{
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        int hour, minute, second;
        cin>>hour>>minute>>second;
        Time t(hour, minute, second);
        t.showTime();
    }
}
