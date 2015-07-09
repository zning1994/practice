//本程序由ZNing张宁制作
//因共用电脑原因将此题自做源码提交给张壳同学OJ
//特此声明：本源码由本人亲写，与张壳同学无关。
//感谢支持，谢谢合作！
#include<stdio.h>
int main()
{
    int k,m,n,i=1;
    scanf("%d%d%d",&k,&m,&n);
    if(m<n)
        printf("%d",m);
    else
        printf("%d",n);
    i=m<n?m+1:n+1;
    for(;i<=k;i++)
    {
        if(i%m!=0&&i%n==0||i%n!=0&&i%m==0)
            printf(" %d",i);
    }
    return 0;
}

