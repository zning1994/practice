#include<stdio.h>
int main()
{
    int N,i,n;
    scanf("%d",&N);
    int a[N];
    for(i=0; i<=N-1; i++)
        scanf("%d",&a[i]);
    while(scanf("%d",&n)!=EOF)
    {
        if(n>=0)
        {
            if(n<=N&&n>=1)
                printf("%d\n",a[n-1]);
            else
                printf("OUT OF RANGE\n");
        }
        else
        {
            n=-n;
            if(n<=N&&n>=1)
                printf("%d\n",a[N-n]);
            else
                printf("OUT OF RANGE\n");
        }
    }
    return 0;
}
