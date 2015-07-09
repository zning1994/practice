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
                 flag=1-flag;    /**翻转，相当于双端队列出入变换**/
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
