#include<stdio.h>
int main()
{
    int N,i,temp,true=0,j;
    long long int Mi[110],Mi2[110];
    while(scanf("%d",&N)!=EOF)
    {
        for(i=0; i<N; i++)
            scanf("%lld",&Mi[i]);
        for(i=1; i<N; i++)
            for(j=0; j<N-i; j++)
                if(Mi[j]<Mi[j+1])
                {
                    temp=Mi[j];
                    Mi[j]=Mi[j+1];
                    Mi[j+1]=temp;
                }
        for(i=0; i<N-1; i++)
            Mi2[i]=Mi[i]-Mi[i+1];
        for(i=0; i<N-1; i++)
            if(Mi2[i]!=Mi[N-1]&&Mi2[i]!=Mi2[i+1])
            {
                printf("No\n");
                true=1;
                break;
            }
        if(true==0)
            printf("Yes\n");
        true=0;
    }
    return 0;
}
