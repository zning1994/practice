/*********************************************************************************************
�򵥷���һ�£�
��������һ����n�������������������ֲ�����
1�����һ���鵽������  ADD(����s)
2��ʹ������k���������������С��k������������  ROTATE
�鱾����󲻳���40000�������ǲ����������Ĵ�д��ĸ����������Ψһ�ģ������������ģ�
����n m��k�������ϵ�n������ϵ��£�m������
����ϵ���������
ѧ����˫�����deque������ͨ���в�𲻴�����ס�
ʼ�ձ��ֶ�����Ԫ��С�ڵ���k����Ϊÿ��ֻ��Ҫ��ǰk������в�����Ҳ���Ǻ��������Զ�����ᱻ����������ֱ�Ӽ���ջans��
ROTATE��ʱ����һ����Ǳ�ʾ˫����е�ͷ�Ƕ��˻���β�Ƕ��˼��ɡ�
string��c_str()����ʹstringת��Ϊchar������printf���
*********************************************************************************************/
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <stack>
#include <queue>
using namespace std;
deque<string>que;
stack<string>ans;
int main()
{
    int n,m,k,flag=true;
    char a[5],str[20];
    scanf("%d%d%d",&n,&m,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%s",a);
        que.push_back(a);
    }
    while(que.size()>k)
    {
        ans.push(que.back());
        que.pop_back();
    }
    for(int i=0;i<m;i++)
    {
        scanf("%s",str);
        if(str[0]=='A')
        {
            int len=strlen(str);
            int sz=0;
            for(int i=4;i<len-1;i++) a[sz++]=str[i];
            a[sz]=0;
            /***cout<<"a="<<a<<endl;***/
            if(flag) que.push_front(a);
            else que.push_back(a);
            if(que.size()>k&&flag)
            {
                ans.push(que.back());
                que.pop_back();
            }
            else if(que.size()>k&&!flag)
            {
                ans.push(que.front());
                que.pop_front();
            }
        }
        else
        {
            flag=!flag;
            /***cout<<"size="<<que.size()<<endl;***/
        }
    }
    if(flag)
    {
        while(!que.empty())
        {
            ans.push(que.back());
            que.pop_back();
        }
    }
    else
    {
        while(!que.empty())
        {
            ans.push(que.front());
            que.pop_front();
        }
    }
    while(!ans.empty())
    {
        printf("%s\n",ans.top().c_str());
        /***cout<<ans.top()<<endl;***/
        ans.pop();
    }
    return 0;
}
