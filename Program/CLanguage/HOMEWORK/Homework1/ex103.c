#include<stdio.h>
int main()
{
    int x,y,z;
    int n,m;
    scanf("%d",&n);
    x=n/100;//X 是百位的数
    y=(n-x*100)/10;//y是十位的数
    z=n%10;//z是个位的数
    m=x*x*x+y*y*y+z*z*z;
    if(n==m)
        printf("YES");
    else
        printf("NO");
    return 0;
}
