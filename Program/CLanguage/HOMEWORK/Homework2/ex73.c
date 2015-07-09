#include <stdio.h>
int main()
{
    int k,m,n,x,s;
    scanf("%d%d%d",&k,&m,&n);
    if (m>n)
        printf("%d",s=n);
    else
        printf("%d",s=m);
    for (x=m<n?m+1:n+1;x<=k;x++)
        if ((x%m==0||x%n==0)&&x%(m*n)!=0)
        printf(" %d",x);
    return 0;
}
