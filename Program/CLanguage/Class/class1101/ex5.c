#include<stdio.h>
int main()
{
    int a,j;
    while(scanf("%d",&a)!=EOF)
    {
        for(j=2; j<a; j++)
            if(a%j==0)
                break;
        if(a!=0&&j>=a&&a!=1)
            printf("是质数\n");
        else
            printf("不是质数。RSA算法，加密算法，运用了大质数哈哈哈哈！^_^\n");
    }
    return 0;
}
