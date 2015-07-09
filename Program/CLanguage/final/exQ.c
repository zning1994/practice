#include<stdio.h>
#include<math.h>
//#define ONLINE_JUDGE
int is_primer(int n)
{
    int i;
    if(n==2)return 1;
    if(n==0||n==1)return 0;
    if(n % 2 == 0)
        return 0;
    for(i=3; i<=sqrt((double)n); i+=2)
        if(n % i == 0)
            return 0;
    return 1;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
    int num;
    while(scanf("%d", &num) != EOF)
    {
        if(is_primer(num))
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
