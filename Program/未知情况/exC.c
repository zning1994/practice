//崔老师讲的例子与思路（OJ存盘）
#include<stdio.h>
int input(int A[],int k)
{
    int i;
    for(i=0; i<k; i++)
        scanf("%d",&A[i]);
    return 0;
}
int output(int A[],int k)
{
    int i;
    printf("%d",A[0]);
    for(i=1; i<k; i++)
        printf(" %d",A[i]);
    putchar('\n');
    return 0;
}
int add(int C[],int A[],int B[],int k,int m)
{
    int i;
    for(i=0; i<k&&i<m; i++)
        C[i]=A[i]+B[i];
    for(; i<k; i++)
        C[i]=A[i];
    for(; i<m; i++)
        C[i]=B[i];
    return (k>m?k:m);
}
int copy(int A[],int B[],int k)
{
    int i;
    for(i=0; i<k; i++)
        A[i]=B[i];
    return 0;
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int A[1010],B[1010],C[1010],N,i,k,m,p;
    scanf("%d",&N);
    scanf("%d",&k);
    input(A,k);
    for(i=2; i<=N; i++)
    {
        scanf("%d",&m);
        if(m==0&&k==0)
            putchar('\n');
        else
        {
            input(B,m);
            p=add(C,A,B,k,m);
            output(C,p);
            copy(A,B,m);
            k=m;
        }
    }
    output(B,m);
    return 0;
}
