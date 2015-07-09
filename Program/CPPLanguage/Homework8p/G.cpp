#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
multiset<int> c;
multiset<int>::iterator p;
int main()
{
    int Q;
    while(cin>>Q)
    {
        if(Q==0)
            break;
        else
        {
            while(Q--)
            {
                int s;
                char cp;
                cin>>cp;
                if(cp=='B')
                {
                    cin>>s;
                    c.insert(s);
                }
                else if(cp=='G')
                {
                    multiset<int>::iterator iter = c.begin();
                    cout<<*iter<<endl;
                    c.erase(iter);
                }
            }
        }
        c.clear();
    }
    c.clear();
    return 0;
}
