/***********************************************
题目大意:
Q a b   ：查询区间[a,b]的和;
C a b x : 更新区间[a,b]，区间所有值加上x;

算法思想：
线段树的成段更新--延迟更新;
在区间查询和更新的时候加入一个延迟节点;
每次要在下次查询或者更新到该区间时;
再把节点的信息传递到左右孩子的结点上;
这样更新大大减少了时间和空间上的开销;

算法过程：
每次更新并不需要更新到叶节点;
只需更新到相应的段就可以了,然后记录个add;
下次更新或者查询的时候,如果要查到该段的子节点;
就把add加到子节点上去,再将该add设为0;
这样查询子区间的复杂度就是更新的复杂度;
************************************************/
#include<iostream>
#include<cstdio>
using namespace std;
#define L l , m , u << 1
#define R m + 1 , r , u << 1 | 1
typedef long long LL;
const int N = 111111;
LL add[N<<2];
LL sum[N<<2];
void PushUp(int u)/****把当前结点的信息更新到父结点****/
{
    sum[u] = sum[u<<1] + sum[u<<1|1];
}
void PushDown(int u,int m)/****把当前结点的信息更新给儿子结点****/
{
    if (add[u])
    {
        add[u<<1] += add[u];
        add[u<<1|1] += add[u];
        sum[u<<1] += add[u] * (m - (m >> 1));
        sum[u<<1|1] += add[u] * (m >> 1);
        add[u] = 0;
    }
}
void build(int l,int r,int u)
{
    add[u] = 0;
    if (l == r)
    {
        scanf("%lld",&sum[u]);
        return ;
    }
    int m = (l + r) >> 1;
    build(L);
    build(R);
    PushUp(u);
}
void update(int l1,int r1,int c,int l,int r,int u)
{
    if (l1 <= l && r <= r1)
    {
        add[u] += c;
        sum[u] += (LL)c * (r - l + 1);
        return ;
    }
    PushDown(u , r - l + 1);
    int m = (l + r) >> 1;
    if (l1 <= m)
        update(l1 , r1 , c , L);
    if (m < r1)
        update(l1 , r1 , c , R);
    PushUp(u);
}
LL query(int l1,int r1,int l,int r,int u)
{
    if (l1 <= l && r <= r1)
    {
        return sum[u];
    }
    PushDown(u , r - l + 1);
    int m = (l + r) >> 1;
    LL res = 0;
    if (l1<= m)
        res += query(l1 , r1 , L);
    if (m < r1)
        res += query(l1 , r1 , R);
    return res;
}
int main()
{
    int N , Q;
    scanf("%d%d",&N,&Q);
    build(1 , N , 1);
    while (Q--)
    {
        char op[2];
        int a , b , c;
        scanf("%s",op);
        if (op[0] == 'Q')
        {
            scanf("%d%d",&a,&b);
            printf("%lld\n",query(a , b , 1 , N , 1));
        }
        else
        {
            scanf("%d%d%d",&a,&b,&c);
            update(a , b , c , 1 , N , 1);
        }
    }
    return 0;
}
