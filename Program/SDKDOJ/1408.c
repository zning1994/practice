#include<stdio.h>
unsigned long long int a[50000];
int main()
{
    int N,i,j,temp;
    while(scanf("%d",&N))
    {
        if(N==0)
            break;
        else
        {
            for(i=0; i<N; i++)
                scanf("%d",&a[i]);
            for(i=1; i<N; i++)
                for(j=0; j<N-i; j++)
                    if(a[j]<a[j+1])
                    {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
            printf("%d\n",a[0]);
        }
    }
    return 0;
}
