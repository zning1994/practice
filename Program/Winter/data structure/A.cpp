/*********************************************************************************************
�򵥷���һ�£�
��������һ����n�������������������ֲ�����
1������һ���鵽������  ADD(����s)
2��ʹ������k���������������С��k������������  ROTATE
�鱾����󲻳���40000�������ǲ����������Ĵ�д��ĸ����������Ψһ�ģ������������ģ�
����n m��k�������ϵ�n������ϵ��£�m������
����ϵ���������
ѧ����˫�����deque������ͨ���в�𲻴�����ס�
ʼ�ձ��ֶ�����Ԫ��С�ڵ���k����Ϊÿ��ֻ��Ҫ��ǰk������в�����Ҳ���Ǻ��������Զ�����ᱻ����������ֱ�Ӽ���ջans��
ROTATE��ʱ����һ����Ǳ�ʾ˫����е�ͷ�Ƕ��˻���β�Ƕ��˼��ɡ�
string��c_str()����ʹstringת��Ϊchar������printf���
*********************************************************************************************/
#include<iostream>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
char a[105];
char tmp[105];
int main()
{
    int n,m,k,i;
    int flag;
    while(cin>>n>>m>>k)
    {
        deque<string> mq;
        stack<string> ans;
        flag=0;
        while(n--)
        {
            scanf("%s",a);
            mq.push_back(a);
        }
        while(mq.size()>k)
        {
            ans.push(mq.back());
            mq.pop_back();
        }
        while(m--)
        {
            scanf("%s",a);
            if(a[0]=='R')
            {
                 flag=1-flag;    /**��ת���൱��˫�˶��г���任**/
                 continue;
            }
            int t=0;
            for(i=4;i<strlen(a)-1;i++)
                tmp[t++]=a[i];
            tmp[t]='\0';
            if(!flag)
            {
                mq.push_front(tmp);
                if(mq.size()>k)
                {
                    ans.push(mq.back());
                    mq.pop_back();
                }
            }
            else
            {
                mq.push_back(tmp);
                if(mq.size()>k)
                {
                    ans.push(mq.front());
                    mq.pop_front();
                }
            }
        }
        if(!flag)
        {
            while(!mq.empty())
            {
                ans.push(mq.back());
                mq.pop_back();
            }
        }
        else
        {
            while(!mq.empty())
            {
                ans.push(mq.front());
                mq.pop_front();
            }
        }
        while(!ans.empty())
        {
            cout<<ans.top()<<endl;
            ans.pop();
        }
    }
    return 0;
}