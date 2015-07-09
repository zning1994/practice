#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,x1,x2,i=1,z;
    scanf("%lf",&a);
    while(a>0||a<0)
    {
        if(a>0)
        {
            scanf("%lf%lf",&b,&c);
            printf("Case %g :\n",i);
            z=b*b-4*a*c;
            if(a>0.999999999&&a<1.000000001)
                printf("x^2");
            else
                printf("%gx^2",a);
            if(b>0.999999999&&b<1.000000001)
                printf(" + x");
            else if(b>-1.00000001&&b<-0.99999999)
                printf(" - x");
            else if(b<0)
                printf(" - %gx",-1*b);
            else if(b>0)
                printf(" + %gx",b);
            if(c>0)
                printf(" + %g = 0\n",c);
            else if(c<0)
                printf(" - %g = 0\n",-1*c);
            else
                printf(" = 0\n");
            if(z<1e-12&&z>-1e-12)
            {
                x1=-1*b/(2*a);
                if(x1<0.000000001&&x1>-0.000000001)
                    x1=0;
                printf("only one real root : %.6g\n\n",x1);
            }
            else if(z>0)
            {
                x1=(-1*b-sqrt(z))/(2*a);
                x2=(-1*b+sqrt(z))/(2*a);
                if(x1<0.000000001&&x1>-0.000000001)
                    x1=0;
                if(x2<0.000000001&&x2>-0.000000001)
                    x2=0;
                printf("two real roots : %.6g, %.6g\n\n",x1,x2);
            }
            else if(z<0)
            {
                printf("two imaginary roots : ");
                x1=-1*b/(2*a);
                x2=sqrt(-1*z)/(2*a);
                if(x1<0.000000001&&x1>-0.000000001)
                {
                    if(x2>0.999999999&&x2<1.000000001)
                        printf("i, -i\n\n");
                    else
                        printf("%.6gi, -%.6gi\n\n",x2,x2);
                }
                else
                {
                    if(x2>0.999999999&&x2<1.000000001)
                        printf("%.6g+i, %.6g-i\n\n",x1,x1);
                    else
                        printf("%.6g+%.6gi, %.6g-%.6gi\n\n",x1,x2,x1,x2);
                }
            }
        }
        else
        {
            a=-1*a;
            scanf("%lf%lf",&b,&c);
            b=-1*b;
            c=-1*c;
            printf("Case %g :\n",i);
            z=b*b-4*a*c;
            if(a>0.999999999&&a<1.000000001)
                printf("x^2");
            else
                printf("%gx^2",a);
            if(b>0.999999999&&b<1.000000001)
                printf(" + x");
            else if(b>-1.000000001&&b<-0.999999999)
                printf(" - x");
            else if(b<0)
                printf(" - %gx",-1*b);
            else if(b>0)
                printf(" + %gx",b);
            if(c>0)
                printf(" + %g = 0\n",c);
            else if(c<0)
                printf(" - %g = 0\n",-1*c);
            else
                printf(" = 0\n");
            if(z<1e-12&&z>-1e-12)
            {
                x1=-1*b/(2*a);
                if(x1<0.000000001&&x1>-0.000000001)
                    x1=0;
                printf("only one real root : %.6g\n\n",x1);
            }
            else if(z>0)
            {
                x1=(-1*b-sqrt(z))/(2*a);
                x2=(-1*b+sqrt(z))/(2*a);
                if(x1<0.000000001&&x1>-0.000000001)
                    x1=0;
                if(x2<0.000000001&&x2>-0.000000001)
                    x2=0;
                printf("two real roots : %.6g, %.6g\n\n",x1,x2);
            }
            else
            {
                printf("two imaginary roots : ");
                x1=-1*b/(2*a);
                x2=sqrt(-1*z)/(2*a);
                if(x1<0.000000001&&x1>-0.000000001)
                {
                    if(x2>0.999999999&&x2<1.000000001)
                        printf("i, -i\n\n");
                    else
                        printf("%.6gi, -%.6gi\n\n",x2,x2);
                }
                else
                {
                        if(x2>0.999999999&&x2<1.000000001)
                            printf("%.6g+i, %.6g-i\n\n",x1,x1);
                        else
                            printf("%.6g+%.6gi, %.6g-%.6gi\n\n",x1,x2,x1,x2);
                }
            }
        }
        i+=1;
        scanf("%lf",&a);
    }
    return 0;
}
