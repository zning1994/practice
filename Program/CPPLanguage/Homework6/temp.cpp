#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
typedef set<int> Vec;
typedef Vec::iterator VecIter;
void print(const char* name, const Vec& v);
int main(){
     Vec a, b;
     for (Vec::size_type i = 1; i < 7; ++i)
        a.push_back(i);
     for (Vec::size_type i = 4; i < 10; ++i)
        b.push_back(i);
     print("a", a);
     print("b", b);
     Vec u;
     set_union (a.begin(), a.end(), b.begin(), b.end(), back_inserter(u));
     Vec i;
     set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(i));
     print("u", u);
     print("i", i);
     return 0;
}
void print(const char* name, const Vec& v) {
    cout << name << " : ";
    for (Vec::size_type i = 0; i < v.size(); ++i)
       cout << v[i] << " ";
    cout << endl;
}
