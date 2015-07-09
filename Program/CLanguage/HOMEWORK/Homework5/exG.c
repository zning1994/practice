#include<stdio.h>
int main()
{
    int N,i=0,j=0,n,b,s=0;
    scanf("%d",&N);
    int a[N];
    for(i=0; i<=N-1; i++)
        scanf("%d",&a[i]);
    while(scanf("%d",&n)!=EOF)
    {
        while(j<=N-1)
        {

            if(n==a[j]){printf("%d ",j+1);s++;}
            printf("=%d=\n",s);
            j++;
            if(s==0)
            {
                printf("NOT FOUND");
                break;
            }
            s=0;
        }

        printf("\n");
        j=0;
    }
    return 0;
}
