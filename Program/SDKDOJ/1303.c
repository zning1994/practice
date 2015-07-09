#include<stdio.h>
int main()
{
    int m,n,a,b,num=0;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        for(a=0;a<1000; a++)
            for(b=0;b<1000; b++)
            {
                if(a*a+b==n&&a+b*b==m)
                    num++;
            }
            printf("%d\n",num);
            num=0;
    }
    return 0;
}
