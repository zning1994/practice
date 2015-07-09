#include<stdio.h>
#include<math.h>
int main()
{
    int m,n;
    long long int a;
    scanf("%d%d%I64d",&n,&m,&a);
    printf("%.lf\n",ceil(n*1.0/a)*ceil(m*1.0/a));
    return 0;
}
