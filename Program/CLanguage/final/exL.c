#include<stdio.h>
//#define ONLINE_JUDGE
void hanoi(int n, int A,int B,int C)
{
    if(n==1)
        printf("   plate %d : from %d to %d\n",n,A,C);
    else
    {
        hanoi(n-1,A,C,B);
        printf("   plate %d : from %d to %d\n",n,A,C);
        hanoi(n-1,B,A,C);
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
    int n,a,b,c,k=1;
    while(scanf("%d%d%d%d",&n,&a,&b,&c)!=EOF)
    {
        printf("case %d :\n",k++);
        hanoi(n,a,b,c);
        printf("\n");
    }
    return 0;
}
