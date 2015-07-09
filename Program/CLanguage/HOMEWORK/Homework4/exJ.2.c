#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,x,b,c,d;
    while(scanf("%d",&a)!=EOF)
    {
        for(i = a+1; i < 10000; i++)
        {
            a = i;
            x = a%10;
            a = a/10;
            b = a%10;
            a = a/10;
            c = a%10;
            d = a/10;
            if(x!=b && x!=c && x!=d)
            {
                if(b!=c && b!=d)
                {
                    if(c!=d)
                    {
                        printf("%d\n",i);
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
