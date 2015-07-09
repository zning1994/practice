#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;
stack<double> s1;
stack<double> s2;
stack<double>::iterator p;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        double a, char c;
        cin>>a>>c;
        if(c=='+')
            s1.push(a);
        else if(c=='-')
            s2.push(a);
        else if(c=='*')
        {
            double ap,total;char cp;
            cin>>ap>>cp;
            if(cp=='*')
                ,
                else
        }
        else if(c=='=')
        {
            int sum1,sum2,sum3;
            i = s1.size();
            while(i--)
                printf("%lf\n",*(&s.top()-i));
        }

    }
    double sum=0;
    return 0;
}
