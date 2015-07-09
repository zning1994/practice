#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>
#include <string>
using namespace std;
deque<string> c;
deque<string>::iterator p;
int main()
{
    int Q;
    cin>>Q;
    while(Q--)
    {
        int t;
        string a;
        cin>>t;
        if(t==1)
        {
            cin>>a;
            c.push_front(a);
        }
        else if(t==2)
        {
            cin>>a;
            c.push_back(a);
        }
        else if(t==3)
        {
            if(c.empty())
                cout<<"-1"<<endl;
            else
                cout<<c.back()<<endl;
        }
        else if(t==4)
        {
            if(c.empty())
                cout<<"-1"<<endl;
            else
                cout<<c.front()<<endl;
        }
        else if(t==5)
        {
            if(c.empty())
                cout<<"-1"<<endl;
            else
                c.pop_back();
        }
        else if(t==6)
        {
            if(c.empty())
                cout<<"-1"<<endl;
            else
                c.pop_front();
        }
        else if(t==0)
            c.clear();
    }
    c.clear();
    return 0;
}
