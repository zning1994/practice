#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <cstdio>
using namespace std;
queue<long long> c[10010];
void queueclear(queue<long long> &d, const unsigned int &s)
{
    if(s!=0)
        for(int i=0; i<s; i++)
            d.pop();
}
int main()
{
    freopen("out","w",stdout);
    int n,m;
    while(cin>>n>>m)
    {
        string a;
        int id,t;
        long long val;
        while(m--)
        {
            cin>>a;
            if(a=="INIT")
            {
                for(int i=0; i<10010; i++)
                    queueclear(c[i],c[i].size());
            }
            else if(a=="PUSH")
            {
                cin>>id>>val>>t;
                for(int i=0; i<t; i++)
                    c[id].push(val);
            }
            else if(a=="POP")
            {
                cin>>id;
                if(c[id].empty())
                {
                    cout<<"NULL"<<endl;
                }
                else
                {
                    cin>>t;
                    if(c[id].size()<t)
                        t=c[id].size();
                    for(int i=0; i<t; i++)
                    {
                        cout<<c[id].front()<<endl;
                        c[id].pop();
                    }
                }
            }
        }
        for(int i=0; i<10010; i++)
            queueclear(c[i],c[i].size());
    }
    return 0;
}
