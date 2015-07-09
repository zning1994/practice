#include <stack>
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    while(1)
    {
        if(cin.eof())
            break;
        char c;
        int flag=0;
        stack<char>zhan01;
        c='#';
        zhan01.push(c);
        while(c!='\n')
        {
            if(c=='(')
            {
                zhan01.push(c);
                flag=flag+1;
            }
            if(c==')')
            {
                if(zhan01.top()=='(')
                    zhan01.pop();
                flag=flag-1;
            }
            c=getchar();
        }
        if(zhan01.top()=='#'&&c=='\n'&&flag>=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
