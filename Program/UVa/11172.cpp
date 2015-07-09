//这个题属于字符串的简单题，就是第一次没有看清题，|a|，|b|是加绝对值的，要考虑负号，之后就很简单了……
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main()
{
    string a, b;
    int num;
    cin >> num;
    while(num--)
    {
        cin >> a >> b;
        if(a[0] == '-'&& b[0]!= '-')
            cout << "<" << endl;
        else if(a[0] != '-'&& b[0]== '-')
            cout << ">" << endl;
        else if( a[0] != '-'&& b[0]!= '-')
        {
            if(a.length() > b.length())
                cout << ">" << endl;
            else if(a.length() < b.length())
                cout << "<" << endl;
            else
            {
                int flag = 1;
                for(int i = 0; i < a.length(); i++)
                {
                    if(a[i] > b[i])
                    {
                        cout << ">" << endl;
                        flag = 0;
                        break;
                    }
                    else if(a[i] < b[i])
                    {
                        cout << "<" << endl;
                        flag = 0;
                        break;
                    }
                }
                if(flag)
                    cout << "=" << endl;
            }
        }
        else
        {
            if(a.length() > b.length())
                cout << "<" << endl;
            else if(a.length() < b.length())
                cout << ">" << endl;
            else
            {
                int flag = 1;
                for(int i = 0; i < a.length(); i++)
                {
                    if(a[i] > b[i])
                    {
                        cout << "<" << endl;
                        flag = 0;
                        break;
                    }
                    else if(a[i] < b[i])
                    {
                        cout << ">" << endl;
                        flag = 0;
                        break;
                    }
                }
                if(flag)
                    cout << "=" << endl;
            }
        }
    }
    return 0;
}
