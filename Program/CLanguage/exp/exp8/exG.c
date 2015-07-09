#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freoepn("out.txt","w",stdout);
#endif
    unsigned long long int x,y,z,N,i;
    scanf("%llu",&N);
    for(x=4; x<=N; x+=3)
        for(y=6; y<=N; y+=4)
            if(x==y)
                for(z=8; z<=N; z+=5)
                    if(x==z)
                        printf("%llu\n",x);
    return 0;
}
