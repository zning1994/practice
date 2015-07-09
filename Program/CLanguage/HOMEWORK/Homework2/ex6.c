#include<stdio.h>
int main()
{
    int a,b,c,x=0;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b)
    {
        x=b;
        b=a;
        a=x;
    }
    if(a>=c)
    {
        x=c;
        c=a;
        a=x;
    }
    if(b>=c)
    {
        x=c;
        c=b;
        b=x;
    }
    printf("%d %d %d",a,b,c);
    return 0;
}
