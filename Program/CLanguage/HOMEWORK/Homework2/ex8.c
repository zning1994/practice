#include<stdio.h>
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int a=0,N,sum;
    scanf("%d",&N);
    while(scanf("%d",&a)!=EOF)
    {
        if(N!=0){scanf("%d",&a);
        sum+=a;
        N--;}else
        printf("%d\n",sum);
    }

    return 0;
}
