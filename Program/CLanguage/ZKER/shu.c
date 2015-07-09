#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    if (a%2==0)
    {
        a=a+n%10;
        n=n/10;
        if (n%2!=0)
            goto jump;

    }
    else if(a%2!=0)
    {
        a=a+n%10;
        n=n/10;
        if(n%2==0)
            goto jump;
        printf("Odd");
    }
       jump: printf("None");
       jump1:
}
