#include<stdio.h>
int main()
{
    int a,b,i=0,sum=0;
    scanf("%d%d",&a,&b);
    i=b-a;
    while(i!=b)
        sum+=a;
        a++;
    printf("%d\n",sum+b);
    return 0;
}
