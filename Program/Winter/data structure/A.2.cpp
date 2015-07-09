/*********************************************************************************************
简单翻译一下：
桌子上有一摞书n本，对于这摞书有两种操作：
1、添加一本书到最上面  ADD(书名s)
2、使最上面k本书逆序，如果总数小于k则所有书逆序  ROTATE
书本数最大不超过40000，书名是不超过三个的大写字母，书名不是唯一的（可能有重名的）
输入n m和k，桌子上的n本书从上到下，m个操作
书从上到下输出结果
学会了双向队列deque，和普通队列差别不大很容易。
始终保持队列中元素小于等于k，因为每次只需要对前k本书进行操作，也就是后面的书永远都不会被操作，可以直接加入栈ans。
ROTATE的时候用一个标记表示双向队列的头是顶端或者尾是顶端即可。
string中c_str()函数使string转化为char可以用printf输出
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
