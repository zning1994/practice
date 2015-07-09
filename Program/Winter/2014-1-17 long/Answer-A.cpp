/***********************************************
��Ŀ����:
Q a b   ����ѯ����[a,b]�ĺ�;
C a b x : ��������[a,b]����������ֵ����x;

�㷨˼�룺
�߶����ĳɶθ���--�ӳٸ���;
�������ѯ�͸��µ�ʱ�����һ���ӳٽڵ�;
ÿ��Ҫ���´β�ѯ���߸��µ�������ʱ;
�ٰѽڵ����Ϣ���ݵ����Һ��ӵĽ����;
�������´�������ʱ��Ϳռ��ϵĿ���;

�㷨���̣�
ÿ�θ��²�����Ҫ���µ�Ҷ�ڵ�;
ֻ����µ���Ӧ�ĶξͿ�����,Ȼ���¼��add;
�´θ��»��߲�ѯ��ʱ��,���Ҫ�鵽�öε��ӽڵ�;
�Ͱ�add�ӵ��ӽڵ���ȥ,�ٽ���add��Ϊ0;
������ѯ������ĸ��ӶȾ��Ǹ��µĸ��Ӷ�;
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
void PushUp(int u)/****�ѵ�ǰ������Ϣ���µ������****/
{
    sum[u] = sum[u<<1] + sum[u<<1|1];
}
void PushDown(int u,int m)/****�ѵ�ǰ������Ϣ���¸����ӽ��****/
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
