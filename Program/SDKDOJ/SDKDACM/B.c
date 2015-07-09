#include<stdio.h>
int main()
{
    int a,b,sum=0;
    int i=0;
    while (scanf("%d%d",&a,&b)!=EOF)
    {
        if(a<=b)
        {
            sum=0;
        while(a!=b)
        {
            sum+=a;
            a++;
                    }
        }
        else
        sum=-1;
        printf("%d\n",sum);
    }
    return 0;
}
