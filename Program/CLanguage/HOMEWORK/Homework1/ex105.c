#include<stdio.h>
int main()
{
    int i,j,k,x;
    scanf("%d",&x);
    k=x;
    i=x%10;
    x=x/10;    /*分解出百位*/
    j=x%10;  /*分解出十位*/
    x=x/10;     /*分解出个位*/
    printf(k==i*i*i+j*j*j+x*x*x?"YES":"NO");
    return 0;
}
