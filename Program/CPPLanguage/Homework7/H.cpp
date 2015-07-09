#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
map<string,int> dict;
map<string,int>::iterator p;
int main()
{
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    long long n;
    string str1;
    int m;
    while(cin>>n)
    {
        while(n--)
        {
            cin>>str1>>m;
            map<string,int>::iterator pp=dict.find(str1);
            if(pp == dict.end())
                dict.insert(make_pair(str1,m));
            else
                dict[str1]+=m;
        }
        for(p=dict.begin(); p!=dict.end(); p++)
            cout<<p->first<<":"<<p->second<<endl;
        dict.clear();
    }
    return 0;
}
