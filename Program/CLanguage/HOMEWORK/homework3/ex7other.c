#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define EP 1e-10
int main()
{
    freopen("in7.txt","r",stdin);
    freopen("out7.txt","w",stdout);
    double a,b,c,d,x1,x2,x,y,z;
    int i=0;
    while(scanf("%lf",&a)!=EOF)
    {

        if(a>-EP&&a<EP)
            //»òÕßÓÃfasb(a)>EP
        break;
        else
        {
            scanf("%lf%lf",&b,&c);
            i++;
            d=b*b-4*a*c;
            if(a>EP)
            {

                 if(b>-EP&&b<EP&&c>-EP&&c<EP&&a<-(EP+1)&&a>EP+1)
                printf("Case %d :\n%gx^2 = 0\nonly one real root : 0\n",i,a);
                else if(b>-EP&&b<EP&&c>-EP&&c<EP&&a>-(EP+1)&&a<EP+1)
                printf("Case %d :\nx^2 = 0\nonly one real root : 0\n",i);

                 else{

                if(d>-EP&&d<EP)
                {
                   x1=(-b-sqrt(d))/(2*a);x2=(-b+sqrt(d))/(2*a);

                   if(b>-EP&&b<EP&&c<-EP)
                   {
                   c=-c;
                   if(a>-(EP+1)&&a<EP+1) printf("Case %d :\nx^2 - %g = 0\ntwo real roots : %g, %g\n",i,c,x1,x2);

                   else printf("Case %d :\n%gx^2 - %g = 0\ntwo real roots : %g, %g\n",i,a,c,x1,x2);
                   }
                  else if(b>-EP&&b<EP&&c>EP)
                  {
                       if(a>-(EP+1)&&a<EP+1) printf("Case %d :\nx^2 + %g = 0\ntwo real roots : %g, %g\n",i,c,x1,x2);

                      else printf("Case %d :\n%gx^2 + %g = 0\ntwo real roots : %g, %g\n",i,a,c,x1,x2);
                  }
                   else if(b<-EP&&c>-EP&&c<EP)
                   {
                   b=-b;
                   if(a>-(EP+1)&&a<EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\nx^2 - x = 0\ntwo real roots : %g, %g\n",i,x1,x2);
                   else if(a>-(EP+1)&&a<EP+1&&b<-(EP+1)&&b>EP+1)  printf("Case %d :\nx^2 - %gx = 0\ntwo real roots : %g, %g\n",i,b,x1,x2);
                   else if(a<-(EP+1)&&a>EP+1&&b>-(EP+1)&&b<EP+1)  printf("Case %d :\n%gx^2 - x = 0\ntwo real roots : %g, %g\n",i,b,x1,x2);
                   else printf("Case %d :\n%gx^2 - %gx = 0\ntwo real roots : %g, %g\n",i,a,b,x1,x2);
                   }
                   else if(b>EP&&c>-EP&&c<EP)
                   {
                       if(a>-(EP+1)&&a<EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\nx^2 + x = 0\ntwo real roots : %g, %g\n",i,x1,x2);
                       else if(a<-(EP+1)&&a>EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\n%gx^2 + x = 0\ntwo real roots : %g, %g\n",i,a,x1,x2);
                       else if(a>-(EP+1)&&a<EP+1&&b<-(EP+1)&&b>EP+1)    printf("Case %d :\nx^2 + %gx = 0\ntwo real roots : %g, %g\n",i,b,x1,x2);
                         else printf("Case %d :\n%gx^2 + %gx = 0\ntwo real roots : %g, %g\n",i,a,b,x1,x2);
                   }
                   else if(b>EP&&c>EP)
                   {
                        if(a>-(EP+1)&&a<EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\nx^2 + x + %g= 0\ntwo real roots : %g, %g\n",i,c,x1,x2);
                       else if(a<-(EP+1)&&a>EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\n%gx^2 + x + %g= 0\ntwo real roots : %g, %g\n",i,a,c,x1,x2);
                       else if(a>-(EP+1)&&a<EP+1&&b<-(EP+1)&&b>EP+1)    printf("Case %d :\nx^2 + %gx + %g = 0\ntwo real roots : %g, %g\n",i,b,c,x1,x2);
                        else printf("Case %d :\n%gx^2 + %gx + %g = 0\ntwo real roots : %g, %g\n",i,a,b,c,x1,x2);
                   }
                   else if(b>EP&&c<-EP)
                   {
                       c=-c;
                       if(a>-(EP+1)&&a<EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\nx^2 + x - %g= 0\ntwo real roots : %g, %g\n",i,c,x1,x2);
                       else if(a<-(EP+1)&&a>EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\n%gx^2 + x - %g = 0\ntwo real roots : %g, %g\n",i,a,c,x1,x2);
                       else if(a>-(EP+1)&&a<EP+1&&b<-(EP+1)&&b>EP+1)    printf("Case %d :\nx^2 + %gx - %g = 0\ntwo real roots : %g, %g\n",i,b,c,x1,x2);
                       else printf("Case %d :\n%gx^2 + %gx - %g = 0\ntwo real roots : %g, %g\n",i,a,b,c,x1,x2);
                   }
                   else if(b<-EP&&c>-EP)
                   {
                       b=-b;
                       if(a>-(EP+1)&&a<EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\nx^2 - x + %g= 0\ntwo real roots : %g, %g\n",i,c,x1,x2);
                       else if(a<-(EP+1)&&a>EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\n%gx^2 - x + %g= 0\ntwo real roots : %g, %g\n",i,a,c,x1,x2);
                       else if(a>-(EP+1)&&a<EP+1&&b<-(EP+1)&&b>EP+1)    printf("Case %d :\nx^2 - %gx + %g = 0\ntwo real roots : %g, %g\n",i,b,c,x1,x2);
                       else printf("Case %d :\n%gx^2 - %gx + %g = 0\ntwo real roots : %g, %g\n",i,a,b,c,x1,x2);
                   }
                   else
                   {
                       c=-c;b=-b;
                       if(a>-(EP+1)&&a<EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\nx^2 - x - %g= 0\ntwo real roots : %g, %g\n",i,c,x1,x2);
                       else if(a<-(EP+1)&&a>EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\n%gx^2 - x - %g= 0\ntwo real roots : %g, %g\n",i,a,c,x1,x2);
                       else if(a>-(EP+1)&&a<EP+1&&b<-(EP+1)&&b>EP+1)    printf("Case %d :\nx^2 - %gx - %g = 0\ntwo real roots : %g, %g\n",i,b,c,x1,x2);
                        printf("Case %d :\n%gx^2 - %gx - %g = 0\ntwo real roots : %g, %g\n",i,a,b,c,x1,x2);
                   }

                }
                else if((fabs(d)-pow(10,-11))<=EP)
                {
                    x=-b/(2*a);

                     if(b>-EP&&b<EP&&c<-EP)
                   {
                   c=-c;
                   if(a>-(EP+1)&&a<EP+1) printf("Case %d :\nx^2 - %g = 0\nonly one real roots : %g\n",i,c,x);
                   else printf("Case %d :\n%gx^2 - %g = 0\nonly one real roots : %g\n",i,a,c,x);
                   }
                  else if(b>-EP&&b<EP&&c>EP)
                  {
                    if(a>-(EP+1)&&a<EP+1) printf("Case %d :\nx^2 + %g = 0\nonly one real roots : %g\n",i,c,x);
                   else printf("Case %d :\n%gx^2 + %g = 0\nonly one real roots : %g\n",i,a,c,x);
                  }
                   else if(b<-EP&&c>-EP&&c<EP)
                   {
                   b=-b;
                   if(a>-(EP+1)&&a<EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\nx^2 - x = 0\nonly one real roots : %g\n",i,x);
                   else if(a>-(EP+1)&&a<EP+1&&b<-(EP+1)&&b>EP+1) printf("Case %d :\nx^2 - %gx = 0\nonly one real roots : %g\n",i,b,x);
                   else if(a<-(EP+1)&&a>EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\n%gx^2 - x = 0\nonly one real roots : %g\n",i,a,x);
                   else printf("Case %d :\n%gx^2 - %gx = 0\nonly one real roots : %g\n",i,a,b,x);
                   }
                   else if(b>EP&&c>-EP&&c<EP)
                   {
                       if(a>-(EP+1)&&a<EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\nx^2 + x = 0\nonly one real roots : %g\n",i,x);
                   else if(a>-(EP+1)&&a<EP+1&&b<-(EP+1)&&b>EP+1) printf("Case %d :\nx^2 + %gx = 0\nonly one real roots : %g\n",i,b,x);
                   else if(a<-(EP+1)&&a>EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\n%gx^2 + x = 0\nonly one real roots : %g\n",i,a,x);
                   else printf("Case %d :\n%gx^2 + %gx = 0\nonly one real roots : %g\n",i,a,b,x);
                   }
                   else if(b>EP&&c>EP)
                   {
                    if(a>-(EP+1)&&a<EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\nx^2 + x + %g = 0\nonly one real roots : %g\n",i,c,x);
                    else if(a>-(EP+1)&&a<EP+1&&b<-(EP+1)&&b>EP+1) printf("Case %d :\nx^2 + %gx + %g = 0\nonly one real roots : %g\n",i,b,c,x);
                    else if(a<-(EP+1)&&a>EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\n%gx^2 + x + %g = 0\nonly one real roots : %g\n",i,a,c,x);
                    else printf("Case %d :\n%gx^2 + %gx + %g = 0\nonly one real roots : %g\n",i,a,b,c,x);
                   }
                   else if(b>EP&&c<-EP)
                   {
                       c=-c;
                       if(a>-(EP+1)&&a<EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\nx^2 + x - %g = 0\nonly one real roots : %g\n",i,c,x);
                    else if(a>-(EP+1)&&a<EP+1&&b<-(EP+1)&&b>EP+1) printf("Case %d :\nx^2 + %gx - %g = 0\nonly one real roots : %g\n",i,b,c,x);
                    else if(a<-(EP+1)&&a>EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\n%gx^2 + x - %g = 0\nonly one real roots : %g\n",i,a,c,x);
                       else  printf("Case %d :\n%gx^2 + %gx - %g = 0\nonly one real roots : %g\n",i,a,b,c,x);
                   }
                   else if(b<-EP&&c>EP)
                   {
                       b=-b;
                       if(a>-(EP+1)&&a<EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\nx^2 - x + %g = 0\nonly one real roots : %g\n",i,c,x);
                    else if(a>-(EP+1)&&a<EP+1&&b<-(EP+1)&&b>EP+1) printf("Case %d :\nx^2 - %gx + %g = 0\nonly one real roots : %g\n",i,b,c,x);
                    else if(a<-(EP+1)&&a>EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\n%gx^2 - x + %g = 0\nonly one real roots : %g\n",i,a,c,x);
                      else  printf("Case %d :\n%gx^2 - %gx + %g = 0\nonly one real roots : %g\n",i,a,b,c,x);
                   }
                   else
                   {
                       c=-c;b=-b;
                       if(a>-(EP+1)&&a<EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\nx^2 - x - %g = 0\nonly one real roots : %g\n",i,c,x);
                    else if(a>-(EP+1)&&a<EP+1&&b<-(EP+1)&&b>EP+1) printf("Case %d :\nx^2 - %gx - %g = 0\nonly one real roots : %g\n",i,b,c,x);
                    else if(a<-(EP+1)&&a>EP+1&&b>-(EP+1)&&b<EP+1) printf("Case %d :\n%gx^2 - x - %g = 0\nonly one real roots : %g\n",i,a,c,x);
                       else printf("Case %d :\n%gx^2 - %gx - %g = 0\nonly one real roots : %g\n",i,a,b,c,x);
                   }

                }
                else
                {
                      z=-b/(2*a);y=sqrt(-d)/(2*a);

                     if(b>-EP&&b<EP&&c<-EP)
                   {
                   c=-c;
                   printf("Case %d :\n%gx^2 - %g = 0\ntwo imaginary roots : %gi, -%gi\n",i,a,c,y,y);
                   }
                  else if(b>-EP&&b<EP&&c>EP)
                   printf("Case %d :\n%gx^2 + %g = 0\ntwo imaginary roots : %gi, -%gi\n",i,a,c,y,y);
                   else if(b<-EP&&c>-EP&&c<EP)
                   {
                   b=-b;
                   printf("Case %d :\n%gx^2 - %gx = 0\ntwo imaginary roots : %g, %g\n",i,a,b,x1,x2);
                   }
                   else if(b>EP&&c>-EP&&c<EP)
                   printf("Case %d :\n%gx^2 + %gx = 0\ntwo imaginary roots : %g, %g\n",i,a,b,x1,x2);
                   else if(b>EP&&c>EP)
                   printf("Case %d :\n%gx^2 + %gx + %g = 0\ntwo imaginary roots : %g+%gi, %g-%gi\n",i,a,b,c,z,y,z,y);
                   else if(b>EP&&c<-EP)
                   {
                       c=-c;
                        printf("Case %d :\n%gx^2 + %gx - %g = 0\ntwo imaginary roots : %g+%gi, %g-%gi\n",i,a,b,c,z,y,z,y);
                   }
                   else if(b<-EP&&c>EP)
                   {
                       b=-b;
                        printf("Case %d :\n%gx^2 - %gx + %g = 0\ntwo imaginary roots : %g+%gi, %g-%gi\n",i,a,b,c,z,y,z,y);
                   }
                   else
                   {
                       c=-c;b=-b;
                        printf("Case %d :\n%gx^2 - %gx - %g = 0\ntwo imaginary roots : %g+%gi, %g-%gi\n",i,a,b,c,z,y,z,y);
                   }

                }
                 }

            }
            else
            {
                a=-a;b=-b;c=-c;
                                if(b>-EP&&b<EP&&c>-EP&&c<EP)
                printf("Case %d :\n%gx^2 = 0\nonly one real root : 0\n",i,a);
                 else{

                if(d>EP)
                {
                   x1=(-b-sqrt(d))/(2*a);x2=(-b+sqrt(d))/(2*a);
                   if(b>-EP&&b<EP&&c<-EP)
                   {
                   c=-c;
                   printf("Case %d :\n%gx^2 - %g = 0\ntwo real roots : %g, %g\n",i,a,c,x1,x2);
                   }
                  else if(b>-EP&&b<EP&&c>EP)
                   printf("Case %d :\n%gx^2 + %g = 0\ntwo real roots : %g, %g\n",i,a,c,x1,x2);
                   else if(b<-EP&&c>-EP&&c<EP)
                   {
                   b=-b;
                   printf("Case %d :\n%gx^2 - %gx = 0\ntwo real roots : %g, %g\n",i,a,b,x1,x2);
                   }
                   else if(b>EP&&c>-EP&&c<EP)
                   printf("Case %d :\n%gx^2 + %gx = 0\ntwo real roots : %g, %g\n",i,a,b,x1,x2);
                   else if(b>EP&&c>EP)
                   printf("Case %d :\n%gx^2 + %gx + %g = 0\ntwo real roots : %g, %g\n",i,a,b,c,x1,x2);
                   else if(b>EP&&c<-EP)
                   {
                       c=-c;
                        printf("Case %d :\n%gx^2 + %gx - %g = 0\ntwo real roots : %g, %g\n",i,a,b,c,x1,x2);
                   }
                   else if(b<-EP&&c>EP)
                   {
                       b=-b;
                        printf("Case %d :\n%gx^2 - %gx + %g = 0\ntwo real roots : %g, %g\n",i,a,b,c,x1,x2);
                   }
                   else
                   {
                       c=-c;b=-b;
                        printf("Case %d :\n%gx^2 - %gx - %g = 0\ntwo real roots : %g, %g\n",i,a,b,c,x1,x2);
                   }

                }
                else if((fabs(d)-pow(10,-11))<=EP)
                {
                    x=-b/(2*a);
                     if(b>-EP&&b<EP&&c<-EP)
                   {
                   c=-c;
                   printf("Case %d :\n%gx^2 - %g = 0\nonly one real roots : %g\n",i,a,c,x);
                   }
                  else if(b>-EP&&b<EP&&c>EP)
                   printf("Case %d :\n%gx^2 + %g = 0\nonly one real roots : %g\n",i,a,c,x);
                   else if(b<-EP&&c>-EP&&c<EP)
                   {
                   b=-b;
                   printf("Case %d :\n%gx^2 - %gx = 0\nonly one real roots : %g\n",i,a,b,x);
                   }
                   else if(b>EP&&c>-EP&&c<EP)
                   printf("Case %d :\n%gx^2 + %gx = 0\nonly one real roots : %g\n",i,a,b,x);
                   else if(b>EP&&c>EP)
                   printf("Case %d :\n%gx^2 + %gx + %g = 0\nonly one real roots : %g\n",i,a,b,c,x);
                   else if(b>EP&&c<-EP)
                   {
                       c=-c;
                        printf("Case %d :\n%gx^2 + %gx - %g = 0\nonly one real roots : %g\n",i,a,b,c,x);
                   }
                   else if(b<-EP&&c>EP)
                   {
                       b=-b;
                        printf("Case %d :\n%gx^2 - %gx + %g = 0\nonly one real roots : %g\n",i,a,b,c,x);
                   }
                   else
                   {
                       c=-c;b=-b;
                        printf("Case %d :\n%gx^2 - %gx - %g = 0\nonly one real roots : %g\n",i,a,b,c,x);
                   }

                }
                else
                {
                      z=-b/(2*a);y=sqrt(-d)/(2*a);

                     if(b>-EP&&b<EP&&c<-EP)
                   {
                   c=-c;
                   printf("Case %d :\n%gx^2 - %g = 0\ntwo imaginary roots : %gi, -%gi\n",i,a,c,y,y);
                   }
                  else if(b>-EP&&b<EP&&c>EP)
                   printf("Case %d :\n%gx^2 + %g = 0\ntwo imaginary roots : %gi, -%gi\n",i,a,c,y,y);
                   else if(b<-EP&&c>-EP&&c<EP)
                   {
                   b=-b;
                   printf("Case %d :\n%gx^2 - %gx = 0\ntwo imaginary roots : %g, %g\n",i,a,b,x1,x2);
                   }
                   else if(b>EP&&c>-EP&&c<EP)
                   printf("Case %d :\n%gx^2 + %gx = 0\ntwo imaginary roots : %g, %g\n",i,a,b,x1,x2);
                   else if(b>EP&&c>EP)
                   printf("Case %d :\n%gx^2 + %gx + %g = 0\ntwo imaginary roots : %g+%gi, %g-%gi\n",i,a,b,c,z,y,z,y);
                   else if(b>EP&&c<-EP)
                   {
                       c=-c;
                        printf("Case %d :\n%gx^2 + %gx - %g = 0\ntwo imaginary roots : %g+%gi, %g-%gi\n",i,a,b,c,z,y,z,y);
                   }
                   else if(b<-EP&&c>EP)
                   {
                       b=-b;
                        printf("Case %d :\n%gx^2 - %gx + %g = 0\ntwo imaginary roots : %g+%gi, %g-%gi\n",i,a,b,c,z,y,z,y);
                   }
                   else
                   {
                       c=-c;b=-b;
                        printf("Case %d :\n%gx^2 - %gx - %g = 0\ntwo imaginary roots : %g+%gi, %g-%gi\n",i,a,b,c,z,y,z,y);
                   }

                }
                 }
            }
            printf("\n");
        }
    }
return 0;
}
