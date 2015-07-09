#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
multiset<int> c;
multiset<int>::iterator p;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        else
        {
            while(n--)
            {
                char cp;
                int x;
                cin>>cp;
                if(cp=='i')
                {
                    cin>>x;
                    c.insert(x);
                }
                else if(cp=='d')
                {
                    cin>>x;
                    for(p=c.begin(); p!=c.end(); p++)
                        if(x==*p)
                        {
                            c.erase(p);
                            break;
                        }
                }
            }
            int i=1;
            for(p=c.begin(); p!=c.end(); p++,i++)
                if(i==c.size())
                    cout<<*p<<endl;
                else
                    cout<<*p<<" ";
        }
        c.clear();
    }
    c.clear();
    return 0;
}
