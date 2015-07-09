#include<stdio.h>
int a[1000100];
int main()
{
    int i,j,k,n,count=1,max,temp;
    while(scanf("%d%d",&i,&j)!=EOF)
    {
        if(i>j){temp=i;i=j;j=temp;}
        for(n=i; n<=j; n++)
        {
            k=n;
            while(k!=1)
            {
                if(k%2!=0)
                    k=3*k+1;
                else
                    k=k/2;
                count++;
            }
            a[n]=count;
            count=1;
        }
        max=a[i];
        for(n=i+1; n<=j; n++)
            if(max<a[n])
                max=a[n];
        printf("%d %d %d\n",i,j,max);
    }
    return 0;
}
