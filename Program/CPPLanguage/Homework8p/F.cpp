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
            if(c.empty())
                cout<<"-1"<<endl;
            else
            {
                cout<<c.back()<<endl;
                c.pop_back();
            }
        }
        else if(t==3)
        {
            c.clear();
        }
    }
    c.clear();
    return 0;
}
