#include<stdio.h>
#define P 0.01
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    double h,l,a,b,d;
    char c,f;
    scanf("%c->%c",&c,&f);
    scanf("%lf%lf%lf",&l,&h,&a);
    if(c=='C'&&f=='F')
    {
        printf("   C  ->    F\n");
        for(; l<=h+P; l=l+a)
        {
            b=9*l/5+32;
            printf("%5.1lf ->%6.1lf\n",l,b);
        }
    }
    else
    {
        printf("   F  ->    C\n");
        for(; l<=h+P; l=l+a)
        {
            b=(l-32)*5/9;
            printf("%5.1lf ->%6.1lf\n",l,b);
        }
    }
    return 0;
}
