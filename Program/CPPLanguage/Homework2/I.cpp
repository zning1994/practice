#include <iostream>
using namespace std;
int main()
{
    int year;
    cin>>year;
    if(year<=0||year>=10000)
        cout<<"Input error."<<endl;
    else if((year%4==0&&year%100!=0)||year%400==0)
        cout<<"It is a leap year."<<endl;
    else
        cout<<"It is not a leap year."<<endl;
    return 0;
}
