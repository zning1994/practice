#include <iostream>
#include <iomanip>
#include <set>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
set<int, less<int> > A, B, C, D, E, F;
set<int, less<int> >::iterator p1;
set<int, less<int> >::iterator it;
void insertset(set<int, less<int> > &P)
{
    int n;
    while(cin>>n)
    {
        if(n!=0)
            P.insert(n);
        else
            break;
    }
}
void outputset(set<int, less<int> > &P)
{
    int i=1;
    for(p1=P.begin(); p1!=P.end(); ++p1)
    {
        if(P.size()!=i++)
            cout<<*p1<<", ";
        else
            cout<<*p1;
    }
    cout<<"}"<<endl;
}
int main()
{
    freopen("out","w",stdout);
    while(!cin.eof())
    {
        insertset(A);
        insertset(B);
        set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(C, C.begin()));
        set_difference(B.begin(), B.end(), A.begin(), A.end(), inserter(D, D.begin()));
        set_union(C.begin(), C.end(), D.begin(), D.end(), inserter(F, F.begin()));
        if(F.size()!=0)
            cout<<"NO"<<endl;
        else if(F.size()==0&&!cin.eof())
            cout<<"YES"<<endl;
        A.clear();
        B.clear();
        C.clear();
        D.clear();
        E.clear();
        F.clear();
    }
    return 0;
}
