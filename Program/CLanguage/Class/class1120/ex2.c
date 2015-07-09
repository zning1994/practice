#include<stdio.h>
int soa(int a[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum+=a[i];
    return sum;
}
int main()
{
    int array[]={1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",soa(array,10));
    return 0;
}
