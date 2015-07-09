#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        if(a%2==0&&a!=2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
