#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <map>
using namespace std;
vector<string> dict;
vector<string>::iterator p;
int main()
{
//    freopen("in","r",stdin);
 //   freopen("out","w",stdout);
    long n;
    cin>>n;
    while(n--){
        string str1;
        cin >> str1;
        dict.push_back(str1);
    }
    sort(dict.begin(),dict.end());
    for(p=dict.begin();p!=dict.end();p++)
        cout<<*p<<endl;
    return 0;
}
