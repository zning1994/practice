#include<stdio.h>
int main()
{
    freopen("細細細細.txt","r",stdin);
    int n;
    if(scanf("%d",&n)!=-1) printf("1");
    else printf("0");
    freopen("細細細細.txt","w",stdout);
    printf("0");
    return 0;
}
