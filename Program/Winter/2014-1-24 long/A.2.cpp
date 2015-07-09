#include <iostream>
#include <cstdio>
using namespace std;
long long int a, b, c, d, e, m;
int main()
{
        int cas, t=0;
        scanf("%d", &cas);
        while (cas--)
        {
                scanf("%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&m);
                long long tmp=a+b+c+d+e;
                printf("Case #%d: ", ++t);
                long long tt=1;
                bool flag=0;
                for (int n=0; n<31; n++)
                {
                        if (tt*tmp>=m)
                        {
                                printf("%d\n", n);
                                flag=1;
                                break;
                        }
                        tt<<=1;
                }
                if (!flag) printf("-1\n");
        }
        return 0;
}
