#include<stdio.h>
#define p 46//���Ϊ46,47���
unsigned long long int a[p]={1,1};
int main()
{
    unsigned long long int i;
    for(i=2;i<=p;i++)
        a[i]=a[i-1]+a[i-2];
    for(i=0;i<p;i++)
        printf("%d ",a[i]);
}//쳲���������
