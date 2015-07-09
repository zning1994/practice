#include <iostream>
using namespace std;
int main()
{
    int a,b,sum=0;
    cin>>a>>b;
    if(a>b){int temp=a;a=b;b=temp;}
    for(int i=a;i<=b;i++)
        if(i%4==0&&i%6==0)
            sum+=i;
    cout<<sum<<endl;
    return 0;
}
