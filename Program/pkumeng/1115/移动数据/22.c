#include<stdio.h>
int solve(int m)
{
    int s,m,i,n,j=0;
    scanf("%d",&n);
    int a[n],b[m];
    s=n-m,i=m;
    if(i!=0)
    {
        temp=a[s+1];
        a[0]=temp;
    }
    else if(i==0)
        for(j=0;j<n;j++)
            printf("%d",a[j]);



}
int main()
{
    int n,m,i;
    int a[n],b[m];
    printf("请输入一个n值：");
    scanf("%d",&n);
    printf("请输入一个m值：");
    scanf("%d",&m);
    for(i=0; i<=n; i++)
        scanf("%d",a[i]);


    return 0;
}
