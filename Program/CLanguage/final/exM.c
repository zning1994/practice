#include<stdio.h>
//#define ONLINE_JUDGE
int put_int_sum(int a, int b)
{
    if(a==0&&b==0)
        return 0;
    printf("%d\n",a+b);
    return a+b;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
    int a, b;
    while(scanf("%d%d", &a, &b))
        if(put_int_sum(a, b) == 0)
            break;
    return 0;
}
