#include<stdio.h>
int main()
{
    int x,y,z;
    int n,m;
    scanf("%d",&n);
    x=n/100;//X �ǰ�λ����
    y=(n-x*100)/10;//y��ʮλ����
    z=n%10;//z�Ǹ�λ����
    m=x*x*x+y*y*y+z*z*z;
    if(n==m)
        printf("YES");
    else
        printf("NO");
    return 0;
}
