#include<stdio.h>
int main()
{
    int m,a=0,b,i=1,j=0,k=0,n=0,sum=0;
    while(scanf("%d",&m)!=EOF)
    {
        while(i<=9)
        {

            while(j<=9)
            {
                if(j==i)
                    j++;
                else
                {
                    while(k<=9)
                    {
                        if(k==i&&k==j)
                            k++;
                        else
                        {
                            a=i*100+j*10+k;
                            if(a%m==0)
                                sum+=a;
                            else
                                a=0;
                            k++;
                        }

                    }

                    j++;
                    i++;
                }
            }

        }
        n++;
        printf("case %d:%d\n",n,sum);
        sum=0;
    }
    return 0;
}
