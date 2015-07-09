#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int i=1;
    double a,m,n,o,x;
    while(scanf("%lf",&a)!=0)
    {
        scanf("%lf%lf",&m,&n);
        printf("Case %d:\n",i);
        if(a==1)
            printf("x^2");
        else
            printf("%lfx^2",a);
        if(m>0)
        {
            if(m==1)
                printf("+ x");
            else printf("%gx",m);
        }
        else if(m<0)
        {
            if(m==-1)
                printf("- x ");
            else
                printf("- %gx ",-x);
        }
        if(n>0)
            printf("+ %g ",n);
        else if (n<0)
            printf("- %g",-n);
        printf("=0\n");
        o=m*m-4*a*n;
        if(o==0)
            printf("only one real root : %g\n",-m/2);
        else if(o>0)
            printf("two real roots : %g,%g\n",(-m-sqrt(o))/2/a,(-m+sqrt(o))/2/m);
        else
        {
            if(m!=0)
                {if(fabs(sqrt(-o)/2/a-1)<=i-6)
                        printf("two imaginary roots : %g+i,%g-i\n",-m/2/a,-m/2/a);
                        else
                            printf("two imaginary roots : %g+%gi,%g-%gi\n",-m/2/a,sqrt(-o)/2/a,-m/2/a,sqrt(-o)/2/a);
                }
            else
                printf("two imaginary roots : %gi,-%gi\n",sqrt(-o)/2/a,sqrt(-o)/2/a);

    }
}
    printf("\n");
    scanf("%lf",&a);
    i++;
    return 0;
}
