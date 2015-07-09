#include<stdio.h>
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int t,s,N,i=0,j=0,true1=0,true2=0,l=0,big;
    int lo,hi,be;
    scanf("%d%d%d",&t,&s,&N);
    int low[N+10],high[N+10],b[N+10],m[N+10],n[N+10],k[N+10];
    for(i=0; i<N; i++)
        scanf("%d%d%d",&low[i],&high[i],&b[i]);
    //tempreture
    for(i=0; i<N; i++)
    {
        if(t>=low[i]&&t<=high[i])
        {
            m[i]=1;
            n[j++]=i;
        }
        else
            m[i]=0;

    }
    for(i=0; i<=N-1; i++)
        if(m[i]==1) true1=1;
    if(true1==0)
        printf("All the dress are inappropriate. Buy new one!\n");
    //beauty standard
    if(true1!=0)
    {
        for(i=0; i<j; i++)
            if(b[n[i]]>=s)
            {
                true2=1;
                k[l++]=n[i];
            }
    }
    if(true2==0&&true1!=0)
        printf("All the dress are ugly. Buy new one!\n");
    if(true1!=0&&true2!=0)
    {
        big=b[k[0]];
        i=0;
        while(i<l)
        {
            if(b[k[i]]>=big)
                big=k[i];
            i++;
        }
        printf("Choose %d dress.\n",big+1);
    }
    return 0;
}
