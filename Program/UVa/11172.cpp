//����������ַ����ļ��⣬���ǵ�һ��û�п����⣬|a|��|b|�ǼӾ���ֵ�ģ�Ҫ���Ǹ��ţ�֮��ͺܼ��ˡ���
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
