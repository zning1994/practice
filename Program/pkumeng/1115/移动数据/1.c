#include<stdio.h>
void solve(int n,int m,int a[30])
{
    int i,t;
    t=a[n-1];
    for(i=0; i<n; i++)
        a[i+1]=a[i];
    a[0]=t;
    if(m!=0)
        solve(n,m-1,a);
}
int main()
{
    void solve(int n,int m,int a[30]);
    int n,m;
    int a[30];
    int i,j;
    printf("������һ��nֵ��");
    scanf("%d",&n);
    printf("������һ��mֵ��");
    scanf("%d",&m);
    printf("��������������ֵ��");
    for(i=0; i<=n-1; i++)
        scanf("%d",&a[i]);
    solve(n,m,a);
    printf("�û��Ľ���ǣ�");
    for(j=0; j<=n-1; j++)
        printf("%d",a[j]);
    return 0;
}
