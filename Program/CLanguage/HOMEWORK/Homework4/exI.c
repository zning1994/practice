#include<stdio.h>
int main()
{
    //freopen("inI.txt","r",stdin);
    //freopen("outI.txt","w",stdout);
    unsigned long long int N,n,a,sum,max,min;
    while(scanf("%llu",&N)!=EOF)
    {
        if(N==0)
            break;
        else
        {

                scanf("%llu",&n);
                max=n,min=n;
                while(N>1)
                {
                    scanf("%llu",&n);
                    if(max<n)
                        max=n;
                    if(min>n)
                        min=n;
                    N--;}
        }
        printf("%llu\n",(max-min)*2);
    }
    return 0;
}

