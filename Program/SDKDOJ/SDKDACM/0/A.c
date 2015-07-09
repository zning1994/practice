#include<stdio.h>
int main()
{
    int a,sum;
    int i=0;
    while (scanf("%d",&a)!=EOF)
    {
        for(i=0,sum=0;i<=a;i++)
            sum+=i;
            printf("%d\n",sum);
 /*   while (i<=a)
    {
        sum+=i;
        i++;
    }
    */
    }
    return 0;
}
