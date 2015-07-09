#include<stdio.h>
int main()
{
    int N,i,n,count,true;
    scanf("%d",&N);
    int a[N];
    count=N-1;
    for(i=0;i<=N-1;i++)
        scanf("%d",&a[i]);
    while(scanf("%d",&n)!=EOF)
    {
        while(count>=0)
        {
            true=0;
            if(a[count]==n)
            {
                printf("%d\n",count+1);
                true++;
                break;
            }
            count--;
        }
        if(true==0)
            printf("NOT FOUND\n");
        count=N-1;

    }
    return 0;
}
