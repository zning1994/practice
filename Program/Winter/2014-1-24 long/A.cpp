#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    long long int A[1100],B[1100],C[1100],D[1100],E[1100];
    long long int i,M,num,sum[1100],casenum=1,flag=0;
    scanf("%lld",&num);
    while(num--)
    {
        scanf("%lld%lld%lld%lld%lld",&A[0],&B[0],&C[0],&D[0],&E[0]);
        scanf("%lld",&M);
        for(i=1; i<=1000; i++)
        {
            A[i]=A[i-1]+B[i-1];
            B[i]=B[i-1]+C[i-1];
            C[i]=C[i-1]+D[i-1];
            D[i]=D[i-1]+E[i-1];
            E[i]=E[i-1]+A[i-1];
        }
        sum[0]=A[0]+B[0]+C[0]+D[0]+E[0];
        for(i=1; i<=1000; i++)
            sum[i]=2*(A[i-1]+B[i-1]+C[i-1]+D[i-1]+E[i-1]);
        if(sum[0]>=M)
            printf("Case #%lld: %lld\n",casenum++,0);
        else
        {
            for(i=1; i<=1000; i++)
                if(sum[i]>=M&&sum[i-1]<M)
                {
                    printf("Case #%lld: %lld\n",casenum++,i);
                    flag=1;
                    break;
                }
        }
        if(flag==0)
            printf("Case #%lld: %lld\n",casenum++,-1);
        memset(A,0,sizeof(A));
        memset(B,0,sizeof(B));
        memset(C,0,sizeof(C));
        memset(D,0,sizeof(D));
        memset(E,0,sizeof(E));
        memset(sum,0,sizeof(sum));
        flag=0;
    }
    return 0;
}
