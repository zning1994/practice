#include<stdio.h>
int main()
{
    int N,i,j,temp;
    scanf("%d",&N);
    int a[N+5];
    for(i=0; i<N; i++)
        scanf("%d",&a[i]);
    for(i=1; i<=N-1; i++)

        for(j=0; j<N-i; j++)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

    for(i=0; i<=N-1; i++)
    {
        if(i==N-1)
           printf("%d",a[N-1]);
                   else
            printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
