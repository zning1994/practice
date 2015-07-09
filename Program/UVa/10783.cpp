/***********************************
这道题其实很水。
    虽然很水，但是我还是WA了= =
    我一开始以为总和可以这么求：((b-a)/2+1)*(a+b)/2
    其实的确可以这么求，不过要确保a,b均为奇数
    但是题目中：
    Each test case consists of 2 integers a and b (0 a b 100) in two separate lines.
    并没有明确说明a和b的奇偶性，这就是WA的原因。
    而且因为是by end of file,所以每次计算完总和之后都得置0,这同样也导致了WA。
    ********************************************/
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    for(int i=1;i<=t;++i)
    {
        cin>>a>>b;
        a >>= 1,b = (b+1) >> 1;
        cout<<"Case "<<i<<": "<<b*b-a*a<<endl;
    }
    return 0;
}
