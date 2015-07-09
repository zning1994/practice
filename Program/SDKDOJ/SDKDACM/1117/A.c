#include<stdio.h>
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    unsigned long int t=0,b=0,true1=0,true2=0,a=-1;
    scanf("%lu",&t);
    unsigned long int n,k;
    while(t>=1)
    {
        b=0,true1=0,true2=0,a=-1;
        scanf("%lu%lu",&n,&k);
        b=n;
        if(n%k==0)
        {
            printf("pass\n");
            true1=1;
        }
        if(true1==0)
        {
            while(a!=0)
            {
                a=n%10;
                if(a==k)
                {
                    printf("pass\n");
                    true2=1;
                    break;
                }
                n/=10;
            }
        }
        if(true1==0&&true2==0)
            printf("%lu\n",b);
        t--;
    }
    return 0;
}
