#include<stdio.h>
int main()
{
    int n,a,b,c,max,min;
    scanf("%d%d%d%d",&n,&a,&b,&c);
    if(a>=b)
        max=a;
    else if(max<=c)
        max=c;
    else
        max=b;
    printf("The maximum number is %d.\n",max);
    if(a<=b)
        min=a;
    else if(min>=c)
        min=c;
    else
        min=b;
    printf("The minimum number is %d.",min);
    return 0;
}
