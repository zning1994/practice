#include<stdio.h>
int main()
{
    int N,i,n,count,true;
    scanf("%d",&N);
    int a[N];
    for(i=0; i<=N-1; i++)
        scanf("%d",&a[i]);
    if(N>=0)
    {
        count=1;
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
    }
    else
    {
        N=-N;
        count=N-1;
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
    }
    return 0;
}
