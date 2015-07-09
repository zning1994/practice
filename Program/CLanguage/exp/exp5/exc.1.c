#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{

    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int t,s,N,i=0,j=0,j1,true1=0,true2=0,l=0,big;
    int lo,hi,be;
    scanf("%d%d%d",&t,&s,&N);
    int low[N],high[N],b[N],m[N],n[N],k[N];
    for(i=0; i<N; i++)
    {
        scanf("%d%d%d",&low[i],&high[i],&b[i]);
    }
    i=N-1;
    while(i>=0)
    {
        if(t>=low[i]&&t<=high[i])
        {
            m[i]=1;
            n[j]=i;
            j++;
        }
        else
            m[i]=0;
        i--;
    }
    if(j>0) j1=j;
    i=N-1;
    //tempreture
    while(i>=0)
    {
        if(m[i]==0)
            true1++;
        i--;
    }
    if(true1==N)
        printf("All the dress are inappropriate. Buy new one!\n");
    //beauty standard
    i=0;
    if(true1!=N)
    {

        while(i<j)
        {
            if(b[n[i]]<s)
                true2++;
            else
            {
                k[l]=n[i];
                l++;
            }
            i++;
        }
    }
    if(true2==N)
        printf("All the dress are ugly. Buy new one!\n");
    if(true1!=N&&true2!=N)
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
