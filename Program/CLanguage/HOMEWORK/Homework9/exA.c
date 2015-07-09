#include<stdio.h>
#define MAX 200010
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    long long int N,M,sum=0,i,j,k,a[MAX],true=0,true2=0;
    double ave=0;
    scanf("%lld",&M);
    while(M>0)
    {
        scanf("%lld",&N);
        for(i=0; i<N; i++)
        {
            scanf("%lld",&a[i]);
            sum+=a[i];
        }
        ave=(double)sum/N;
        for(i=0; i<N; i++)
        {
            if(a[i]==ave)
                true++;
        }
        if(true!=0)
        printf("%lld\n",true);
        true=0;
        for(i=0; i<N; i++)
        {
            if(a[i]==ave&&true2==1&&true==1)
                printf(" %lld",i+1);
            if(a[i]==ave&&true==0)
            {
                printf("%lld",i+1);
                true=1;
                true2=1;
            }
        }
        if(true2==0)
            printf("0");
        printf("\n");
        M--,sum=0,ave=0,true=0,true2=0;
    }
}
