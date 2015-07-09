#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    long long m,n;
    string str1,str2,str3;
    while(cin>>n)
    {
        map<string,string> dict;
        map<string,string>::iterator p;
        for(long long i=0; i<n; i++)
        {
            cin>>str1>>str2;
            dict.insert(make_pair(str2,str1));
        }
        cin>>m;
        for(long long i=0; i<m; i++)
        {
            cin>>str3;
            if(dict[str3].empty())
                cout<<"eh"<<endl;
            else
                cout<<dict[str3]<<endl;
        }
    }
    return 0;
}
