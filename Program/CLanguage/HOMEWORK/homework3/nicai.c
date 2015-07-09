#include<stdio.h>
#include<math.h>
#include<string.h>
#define eps 1e-8
int main()
{
    //freopen("in1.txt","r",stdin);
    //freopen("out1.txt","w",stdout);
    long double a,b,c,o;
    long int e=1;
    while(scanf("%llf",&a))
    {
        if(a-0<eps)
            break;
        else
        {
            scanf("%llf%llf",&b,&c);
            printf("Case %ld:\n",e);
            if(a<0)
            {
                a=-a;
                b=-b;
                c=-c;
            }
            if(a==1) printf("x^2 ");
            else printf("%llfx^2 ",a);
            if(b>0)
            {
                if(b==1) printf("+ x ");
                else printf("+ %lgx ",b);
            }
            else if(b<0)
            {
                if(b==-1) printf("- x ");
                else printf("- %lgx ",-b);
            }
            if(c>0)printf("+ %lg ",c);
            else if(c<0)
                printf("- %lg ",-c);
            printf("= 0\n");
            o=b*b-4*a*c;
            if(o==0)
            {
                printf("only one real root : %lg\n",-b/2/a);
            }
            else if(o>0)
            {
                printf("two real roots : %lg,%lg\n",(-b-sqrt(o))/2/a,(-b+sqrt(o))/2/a);
            }
            else
            {
                if(b!=0)
                {
                    if(fabs(sqrt(-o)/2/a-1)<=1e-6)
                        printf("two imaginary roots : %lg+i,%lg-i\n",-b/2/a,-b/2/a);
                    else
                        printf("two imaginary roots : %lg+%lgi,%lg-%lgi\n",-b/2/a,sqrt(-o)/2/a,-b/2/a,sqrt(-o)/2/a);
                }
                else
                    printf("two imaginary roots : %lgi,-%lgi\n",sqrt(-o)/2/a,sqrt(-o)/2/a);
            }
            printf("\n");

            scanf("%llf",&a);
            e++;
        }
    }
    return 0;
}
