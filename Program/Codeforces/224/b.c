#include<stdio.h>
int main()
{
    unsigned long long a,b,w,x,c;
    int i;
    while(scanf("%I64u%I64u%I64u%I64u%I64u",&a,&b,&w,&x,&c)!=EOF)
    {
        for(i=0;; i++)
            if(c>a)
            {
                c--;
                if(b>=x)
                    b=b-x;
                else if(b<x)
                    a--,b=(w-(x-b));
            }
            else if(c<=a)
            {
                printf("%d\n",i);
                break;
            }
    }
    return 0;
}
