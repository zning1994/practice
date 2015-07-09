#include <cstdio>
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
char str[6];
vector<int> va;
vector<int>::iterator It;
int main()
{
    freopen("out","w",stdout);
    int a,b,c;
    while(!cin.eof())
    {
        cin>>str;
        if('B'==str[0])
        {
            cin>>a>>b;
            vector<int> v(a+4,b);
            va=v;
            memset(str,0,sizeof(str));
        }
        else if('M'==str[0])
        {
            memset(str,0,sizeof(str));
            cin>>a>>b;
            va[a]=b;
        }
        else if('I'==str[0])
        {
            memset(str,0,sizeof(str));
            cin>>a>>b>>c;
            va.insert(va.begin()+a,va.begin()+b,va.begin()+c+1);
        }
        else if('E'==str[0])
        {
            memset(str,0,sizeof(str));
            cin>>a>>b;
            va.erase(va.begin()+a,va.begin()+b+1);
        }
        else if('P'==str[0])
        {
            memset(str,0,sizeof(str));
            cin>>a>>b;
            for(int i=a;i<b;i++)
                cout<<"["<<i<<"]:"<<va[i]<<" ";
            cout<<"["<<b<<"]:"<<va[b]<<endl;
        }
    }
    return 0;
}
