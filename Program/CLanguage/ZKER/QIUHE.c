#include<stdio.h>
int main()
{
    int a,b,n,x,y;
    scanf("%d%",&n);
    x=-32768;
    y=-32768;
    for(a=1;a<=n;a++)
    {
        scanf("%d",&b);
        if(y<=b&&x<=b)
            y=b;
        else if(y)
        }
        printf("%d + %d = %d",x,y,x+y);
}
