#include <iostream>
#include <iomanip>
#include <set>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
set<int, less<int> > A, B, C, D, E, F, G;
set<int, less<int> >::iterator p1;
set<int, less<int> >::iterator it;
void insertset(set<int, less<int> > &P)
{
    int n;
    cin>>n;
    P.insert(n);
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
    int T,m,n,pt=1;
    cin>>T;
    while(T--)
    {
        cin>>m;
        for(int i=0; i<m; i++)
            insertset(A);
        cin>>n;
        for(int i=0; i<n; i++)
            insertset(B);
        cout<<"Case# "<<pt++<<":"<<endl;

        cout<<"A = {";
        outputset(A);
        cout<<"B = {";
        outputset(B);

        set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(C, C.begin()));
        cout<<"A u B = {";
        outputset(C);

        set_intersection(A.begin(), A.end(), B.begin(), B.end(), inserter(D, D.begin()));
        cout<<"A n B = {";
        outputset(D);

        set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(E, E.begin()));
        cout<<"A - B = {";
        outputset(E);

        set_symmetric_difference(C.begin(), C.end(), A.begin(), A.end(), inserter(F, F.begin()));
        cout<<"SA = {";
        outputset(F);

        set_symmetric_difference(C.begin(), C.end(), B.begin(), B.end(), inserter(G, G.begin()));
        cout<<"SB = {";
        outputset(G);

        A.clear();
        B.clear();
        C.clear();
        D.clear();
        E.clear();
        F.clear();
        G.clear();

    }
    return 0;
}

