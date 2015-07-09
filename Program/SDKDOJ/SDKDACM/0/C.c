#include<stdio.h>
int main()
{
    int a,b,i,sum1,sum2;
    while (scanf("%d%d",&a,&b)!=EOF)
    {
        for(i=0;a<=b;i++)
        {
            if(a%2==0)
                sum1+=a;
            else
                sum2+=a;
        }
        printf("%d %d",sum1,sum2);
    }
    return 0;
}
