#include<stdio.h>
int main()
{
    //freopen("inG.txt","r",stdin);
    //freopen("outG.txt","w",stdout);
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c))
    {
        if(a==0&&b==0&&c==0)
            break;
        else
        {
            if(a+b<=c || a+c<=b || b+c<=a)
                printf("not a triangle\n");
            else if(a==b && b==c)
                printf("a equileteral triangle\n");
            else if(a==b || b==c || a==c)
                printf("a isosceles triangle\n");
            else if(a*a+b*b==c*c || a*a==b*b+c*c || a*a+c*c==b*b)
                printf("a right triangle\n");
            else printf("a triangle\n");
        }

    }
    return 0;
}
