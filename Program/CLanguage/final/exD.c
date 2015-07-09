#include<stdio.h>
//#define ONLINE_JUDGE
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
    int second,h=0,m=0,s=0,ss=0;
    while(scanf("%d",&second))
    {
        if(second==0)
            break;
        else
        {
            second--;
            while(second>=3600)
            {
                h++;
                second-=3600;
            }
            while(second>=60)
            {
                m++;
                second-=60;
            }
            printf("%.2d:%.2d:%.2d\n",h,m,second);
        }
        h=0,m=0,second=0;

    }
    return 0;
}
