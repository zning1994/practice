#include<iostream>
#include<stdio.h>
using namespace std;
#define L l , m , u << 1
#define R m + 1 , r , u << 1 | 1
#define NP 111111
long long add[NP],sum[NP];
void PushUp(int u)
{
    sum[u] = sum[u<<1] + sum[u<<1|1];
}
void PushDown(int u,int m)
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
void update(int ll,int rr,int c,int l,int r,int u)
{
    if (ll <= l && r <= rr)
    {
        add[u] += c;
        sum[u] += (long long)c * (r - l + 1);
        return ;
    }
    PushDown(u , r - l + 1);
    int m = (l + r) >> 1;
    if (ll <= m)
        update(ll , rr , c , L);
    if (m < rr)
        update(ll , rr , c , R);
    PushUp(u);
}
long long query(int ll,int rr,int l,int r,int u)
{
    if (ll <= l && r <= rr)
    {
        return sum[u];
    }
    PushDown(u , r - l + 1);
    int m = (l + r) >> 1;
    long long res = 0;
    if (ll<= m)
        res += query(ll , rr , L);
    if (m < rr)
        res += query(ll , rr , R);
    return res;
}
int main()
{
    int N,Q;
    scanf("%d%d",&N,&Q);
    build(1,N,1);
    while (Q--)
    {
        getchar();
        char ss;
        int a , b , c;
        scanf("%c",&ss);
        if (ss == 'Q')
        {
            scanf("%d%d",&a,&b);
            printf("%lld\n",query(a,b,1,N,1));
        }
        else if (ss == 'C')
        {
            scanf("%d%d%d",&a,&b,&c);
            update(a,b,c,1,N,1);
        }
    }
    return 0;
}
