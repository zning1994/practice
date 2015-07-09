#include<stdio.h>
#define ONLINE_JUDGE
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
    double length,width,high;
    scanf("%lf%lf%lf",&length,&width,&high);
    printf("%g\n",length*width*high);
    return 0;
}
