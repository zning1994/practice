#include<stdio.h>
int main()
{
    int d,a;
    scanf("%d",&a);
    d=0;
    while(a!=-1)
    {
        scanf("%d",&a);
        d=10*d+a;
    }
    printf("%d",d);
    return 0;
}
