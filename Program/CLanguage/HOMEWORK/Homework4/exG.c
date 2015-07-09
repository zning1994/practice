#include<stdio.h>
int main()
{
    //freopen("inG.txt","r",stdin);
    //freopen("outG.txt","w",stdout);
    int a,b,c,x,y;
    while(scanf("%d%d%d",&a,&b,&c))
    {
        if(a==0&&b==0&&c==0)
            break;
        else
        {
            if(a<=b)
                x=a,a=b,b=x;
            else if(a<=c)
                x=c,a=c,c=x;
            else if(b<=c)
                x=b,b=c,c=x;
            //printf("%d%d%d",a,b,c);
            if(a+b<=c||a+c<=b||b+c<=a)
                printf("not a triangle\n");
            else if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
                printf("a right triangle\n");
            else if(a==b&&b==c&&c==a)
                printf("a equileteral triangle\n");
            else if(a==b||b==c||c==a)
                printf("a isosceles triangle\n");
            else
                printf("a triangle\n");
        }

    }
    return 0;
}
