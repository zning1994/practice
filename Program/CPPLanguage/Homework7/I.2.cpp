#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;
int main()
{
    string strtmp;
    long long n;
    cin>>n;
    vector<string> vect;
    while(n--)
    {
        cin>>strtmp;
        vect.insert(end(),strtmp);
    }
    sort(vect.begin(), vect.end());
    vector<string>::iterator it=unique(vect.begin(), vect.end());
    return 0;
}
