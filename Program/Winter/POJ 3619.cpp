#include <iostream>
#include <cstdio>
#include <cmath>
int main()
{
    int N,K;
    int s,t,r,i;
    scanf("%d%d",&N,&K);
    while(K--)
    {
        scanf("%d%d%d",&s,&t,&r);
        int e=ceil((float)N/(float)s);//进行几次看书
        if(e<=t)
            printf("%d\n",e);
        else
            printf("%d\n",e+(e-1)/t*r);//看书的时间+休息的时间（看一次休息一次，所以休息e-1次，最后一次不算）
    }
    return 0;
}
