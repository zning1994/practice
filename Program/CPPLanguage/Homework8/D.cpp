#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <cstdio>
using namespace std;
int main()
{
    freopen("out","w",stdout);
    int n,m;
    list<int> like;
    list<int>::iterator p;
    while(cin>>n)
    {
        for(int i=0; i<n; i++)
        {
            int p;
            cin>>p;
            like.push_back(p);
        }
        like.sort();
        cin>>m;
        while(m--)
        {
            int t,j,i,flag=0;
            cin>>t;
            switch(t)
            {
            case 1:
                cin>>j>>i;
                for(p=like.begin(); p!=like.end(); p++)
                    if(*p==j)
                    {
                        p++;
                        like.insert(p,i);
                        break;
                    }
                break;
            case 2:
                cin>>i;
                for(p=like.begin(); p!=like.end(); p++)
                    if(*p<=i)
                        *p=0;
                break;
            case 3:
                cin>>j>>i;
                for(p=like.begin(); p!=like.end(); p++)
                    if(*p==i)
                        *p=0;
                for(p=like.begin(); p!=like.end(); p++)
                    if(*p==j)
                    {
                        p++,flag=1;
                        like.insert(p,i);
                        break;
                    }
                break;
            }
        }
        int ip=1;
        for(p=like.begin(); p!=like.end(); p++,ip++)
            if(*p!=0&&like.size()!=ip)
                cout<<*p<<" ";
            else if(like.size()==ip)
                cout<<*p;
        cout<<endl;
        like.clear();
    }
    return 0;
}
