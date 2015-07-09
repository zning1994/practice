#include<stdio.h>
long long int num[9000000],sum=0;
void build(int l,int r)
{

}
int main()
{
    long long int N,T,a,b,i,j,c;
    char s,ss;
    scanf("%I64d%I64d",&N,&T);
    build(1,N);
    while(T--)
    {
        getchar();
        scanf("%c",&s);
        if(s=='Q')
        {
            scanf("%I64d%I64d",&a,&b);
            for(j=a; j<=b; j++)
                sum+=num[j];
            printf("%I64d\n",sum);
            sum=0;
        }
        else if(s=='C')
        {
            scanf("%I64d%I64d%I64d",&a,&b,&c);
            for(j=a; j<=b; j++)
                num[j]+=c;
        }
    }
    return 0;
}
