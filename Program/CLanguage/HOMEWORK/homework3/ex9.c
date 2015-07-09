#include<stdio.h>
int main()
{
    int M=0,N=0,a=0,sum=0;
    scanf("%d",&M);
    while(M!=0)
    {
        scanf("%d",&N);
        while(N>0)
        {
            scanf("%d",&a);
            sum+=a;
            N--;
        }
        printf("%d\n\n",sum);
        N=0,a=0,sum=0;
        M--;
    }
    return 0;
}
