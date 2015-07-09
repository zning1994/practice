#include <stdio.h>
#include <math.h>
int main()
{
    int a,c,d,i,e;
    scanf("%d",&a);
    c=a;
    e=0;
    while (a!=0)
    {
        d=a%10;
        a=a/10;
        e=10*e+d;
    }
    if (e==c)
        printf ("YES");
    else
        printf ("NO");
    return 0;
}
