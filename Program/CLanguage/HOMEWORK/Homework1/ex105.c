#include<stdio.h>
int main()
{
    int i,j,k,x;
    scanf("%d",&x);
    k=x;
    i=x%10;
    x=x/10;    /*�ֽ����λ*/
    j=x%10;  /*�ֽ��ʮλ*/
    x=x/10;     /*�ֽ����λ*/
    printf(k==i*i*i+j*j*j+x*x*x?"YES":"NO");
    return 0;
}
