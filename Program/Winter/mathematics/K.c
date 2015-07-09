#include<stdio.h>
#define MAXN 1000000
int cnt[MAXN+5];
int vec[250];
int ans[MAXN+5];
void Init()
{
    int i,j;
    //这是f(n)函数因变量的重中之重：两个for循环嵌套。
    for(i=1; i<=MAXN; i++)
        for(j=i; j<=MAXN; j+=i)
            cnt[j]++;
    //暴力打表进行调用函数查询。
    for(i=1; i<=1000000; i++)
    {
        ans[i]=vec[cnt[i]];
        vec[cnt[i]]++;
    }
}
int main()
{
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    Init();
    int n;
    while(scanf("%d",&n)!=EOF)
        printf("%d\n",cnt[n]);
    return 0;
}
