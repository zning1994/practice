#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    freopen("inB.txt","r",stdin);
    freopen("outB.txt","w",stdout);
    int m,n,i,j,k,tru=0,tru1=0;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        for(i=m; i<=n; i++)
        {
            for(j=2; j<=i; j++)
                if(i%j==0)
                {
                    tru1=1;
                    //printf("==%d==\n",tru);
                    break;
                }
            if(tru1==0&&i!=1)
            {
                tru++;
                printf("%d\n",i);
            }
            //printf("=%d=%d=\n",i,j);
        }
        if(tru==0)
            printf("\n");
        printf("\n");

        tru=0;
    }
    return 0;
}
