#include <iostream>
using namespace std;
class Date{
protected:
    int year,month,day;
public:
    Date(int y,int m, int d){
        year=y,month=m,day=d;
    }
    Date(){
        year=0,month=0,day=0;
    }
    void SetDate(int y, int m, int d){
        year=y,month=m,day=d;
    }
    void print(){
        cout<<year<<"/"<<month<<"/"<<day<<" ";
    }
};
class Time{
protected:
    int hour,minute,second;
public:
    Time(int h, int m, int s){
        hour=h,minute=m,second=s;
    }
    Time(){
        hour=0,second=0,minute=0;
    }
    void SetTime(int h, int m, int s){
        hour=h,minute=m,second=s;
    }
};
class DateTime : public Time ,public Date{
public:
    DateTime(int ye, int mo,int da,int ho,int mi,int se):Date(ye,mo,da),Time(ho,mi,se){}
    DateTime():Date(0,0,0),Time(0,0,0){}
    void Print(){cout<<year<<"/"<<month<<"/"<<day<<" "<<hour<<":"<<minute<<":"<<second<<endl;}
};
int main()
{
    int y, mon, d, h, mi, s;
    cin>>y>>mon>>d>>h>>mi>>s;
    DateTime dt_a,dt_b(y,mon,d,h,mi,s);
    dt_a.Print();
    dt_b.Print();
    cin>>h>>mi>>s;
    dt_a.SetTime(h, mi, s);
    cin>>y>>mon>>d;
    dt_a.SetDate(y,mon,d);
    dt_a.Print();
    return 0;
}
