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
        int e=ceil((float)N/(float)s);//���м��ο���
        if(e<=t)
            printf("%d\n",e);
        else
            printf("%d\n",e+(e-1)/t*r);//�����ʱ��+��Ϣ��ʱ�䣨��һ����Ϣһ�Σ�������Ϣe-1�Σ����һ�β��㣩
    }
    return 0;
}
