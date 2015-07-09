#include<stdio.h>
int main()
{
//    freopen("in","r",stdin);
//    freopen("out","w",stdout);
    unsigned long long int N,i,j,temp,max,a;
    while(scanf("%llu",&N))
    {
        if(N==0)
            break;
        else
        {
            scanf("%llu",&max);
            for(i=0; i<N-1; i++)
            {
                scanf("%llu",&a);
                if(a>max)max=a;
            }
            printf("%llu\n",max);
        }
    }
    return 0;
}
