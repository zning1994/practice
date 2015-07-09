#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,c,sum=0,n=0,i=0;
    char b,x;
    while(scanf("%d",&a))
    {
        if(a==0)
        {
            break;
        }
        else
            sum+=a;
    }
    x=getchar();
    b=getchar();
    while(scanf("%d",&c))
    {
        if(c==0)
            break;
        else
            n+=c;
    }
    if(b=='+')
        i=sum+n;
    else if(b=='-')
        i=sum-n;
    printf("%d",i);
    return 0;

}
