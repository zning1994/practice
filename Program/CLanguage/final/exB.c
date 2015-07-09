#include<stdio.h>
//#define ONLINE_JUDGE
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
    double a;
    scanf("%lf",&a);
    if(a>=0)
        printf("+ %d %g",(int)a,a-(int)a);
    else if(a<0){a=-a;
        printf("- %d %g",(int)a,a-(int)a);}
    return 0;
}
