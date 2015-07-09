#include<stdio.h>
int main()
{
    int m,a=0,b,i=1,j=0,k=0,n=0,sum=0;
    while(scanf("%d",&m)!=EOF)
    {
        for(; i<=9; i++)
        {
            for(; j<=9; j++)
            {
                if(j==i)
                {
                    j++;
                    continue;
                }
                else
                {
                    for(; k<=9; k++)
                    {
                        if(k==j||k==i)
                        {
                            k++;
                            continue;
                        }
                        else
                        {
                            a=i*100+j*10+k;

                            if(a%m==0)
                                sum+=a;
                            k++;

                        }

                    }
                    j++;
                }
            }
        }
        n++;
        printf("case %d:%d\n",n,sum);
        sum=0;
    }
    return 0;
}


