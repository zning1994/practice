#include<stdio.h>
int main()
{
    int N=0,a=0,sum=0;
    while(scanf("%d",&N))
    {
        if(N==0)
            break;
        else
        {
            while(N>0)
            {
                scanf("%d",&a);
                sum+=a;
                N--;
            }
            printf("%d\n",sum);
            N=0,a=0,sum=0;
        }
    }
    return 0;
}
