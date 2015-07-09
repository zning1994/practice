#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    long long n;
    string q,name,a;
    while(cin>>n)
    {
        map<string,string>m;
        map<string,string>::iterator cou;
        for(long long i=0; i<n; i++)
        {
            cin>>name>>a;
            m.insert(make_pair(a,name));
        }
        long long z;
        cin>>z;
        for(long long i=0; i<z; i++)
        {
            cin>>q;
            if(m[q].empty())
                cout<<"eh"<<endl;
            else
                cout<<m[q]<<endl;
        }
    }
}
