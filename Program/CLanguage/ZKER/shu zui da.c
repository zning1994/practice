#include<stdio.h>
int main()
{
    int n,a,b,c;
    c=1;
    b=0;
    scanf("%d",&n);
    if (n!=0)
       {
        if(c<=n)
    {scanf("%d",&a);
        b=b>=a?b:a;
        c++;

    printf("%d",b);
    }
        return 0;
}
}
