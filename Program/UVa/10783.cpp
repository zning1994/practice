/***********************************
�������ʵ��ˮ��
    ��Ȼ��ˮ�������һ���WA��= =
    ��һ��ʼ��Ϊ�ܺͿ�����ô��((b-a)/2+1)*(a+b)/2
    ��ʵ��ȷ������ô�󣬲���Ҫȷ��a,b��Ϊ����
    ������Ŀ�У�
    Each test case consists of 2 integers a and b (0 a b 100) in two separate lines.
    ��û����ȷ˵��a��b����ż�ԣ������WA��ԭ��
    ������Ϊ��by end of file,����ÿ�μ������ܺ�֮�󶼵���0,��ͬ��Ҳ������WA��
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
