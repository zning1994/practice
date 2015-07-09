#include<stdio.h>
#include<math.h>
int main()
{
    freopen("inB.txt","r",stdin);
    freopen("outB.txt","w",stdout);
    int m,n,i,j,temp,flag;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        temp=0;
        for(i=m; i<=n; i++)
        {
            flag=0;
            for(j=2; j<=sqrt(i)+0.1; j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0&&i!=1)
            {
                printf("%d\n",i);
                temp=1;
            }
        }
        if(temp==0)printf("\n");
        printf("\n");
    }
    return 0;
}
