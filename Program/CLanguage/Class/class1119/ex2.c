#include<stdio.h>
#include<math.h>
int fact(int n)
{
    int k,i;
    if(n==1)
        return 2;
    k=(int)sqrt(n);
    for(i=2; i<=k; i++)
        if(n%i==0)
            return 1;
    return 0;
}
int main()
{
    int data;
    scanf("%d",&data);
    if(!(fact(data)))
        puts("Yes");
    else
        puts("No");
    return 0;
}
