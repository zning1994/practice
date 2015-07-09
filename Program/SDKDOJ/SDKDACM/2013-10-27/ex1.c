#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        a=a << 2;
        printf("%d\n",a);
    }
    return 0;
}
