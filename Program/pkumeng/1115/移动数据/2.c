#include<stdio.h>
int solve(int N,int m)
{
    int i,j,k=0,temp;
    int a[N];
    for(i=0; i<N; i++)
        scanf("%d",a[i]);
    i=N-m;
    if(i<N)
    {
        temp=a[i];
        for(j=i-1; j>=k; j--)
            a[j+1]=a[j];
        a[k]=temp;
        k++;
    }

    else return 0;
    solve(N,m+1);
}
int main()
{
    int N,m,i;
    printf("������һ��nֵ��");
    scanf("%d",&N);
    int a[N];
    printf("������һ��mֵ��");
    scanf("%d",&m);
    solve(N,m);
    for(i=0; i<N; i++)
        printf("%d ",a[i]);
    return 0;
}
