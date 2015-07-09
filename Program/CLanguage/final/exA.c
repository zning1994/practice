#include<stdio.h>
//#define ONLINE_JUDGE
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
    int a,a1,b,c,d;
    scanf("%d",&a);
    a1=a;b=a;c=a;d=a;
    printf("  a   : %d\n--a   : %d\n  a-- : %d\n  a++ : %d\n++a   : %d",a1,--a,b--,c++,++d);

}
