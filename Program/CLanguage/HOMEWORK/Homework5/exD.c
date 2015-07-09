#include<stdio.h>
int main()
{
    int N,i,n,count=1,true;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<=N-1;i++)
        scanf("%d",&a[i]);
    while(scanf("%d",&n)!=EOF)
    {
        while(count<=N)
        {
            true=0;
            if(a[count-1]==n)
            {
                printf("%d\n",count);
                true++;
                break;
            }
            count++;
        }
        if(true==0)
            printf("NOT FOUND\n");
        count=1;

    }
    return 0;
}
