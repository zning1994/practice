#include<stdio.h>
int main()
{
    unsigned long int x,y,i,k=0;
    while(scanf("%lu%lu",&x,&y))
    {
        if(x==0&&y==0)
            break;
        else
        {
            for(i=y; i>=x; i--)
            {
                if(i*i>=x&&i*i<=100000||i*i>=1&&i*i<=y)
                    k++;
            }
            printf("%lu\n",k);
            k=0;
        }
    }
    return 0;
}
