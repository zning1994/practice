#include<stdio.h>
int main()
{
    int n,a,b,c,i,j,k;
    scanf("%d",&n);
    printf("Sun Mon Tue Wen Thu Fri Sat\n");
    if(n!=7)
    {
        for(i=0; i<=n; i++)
        {
            printf("   ");
        }

    }
    else
    {

        for(j=1; j<30; j++)
        {
            for(k=1; k<=7; k++)
            {
                if(j<=9)
                    printf(" ");
                else
                    printf(" ");
                printf(" %d",j);
                j++;
            }
            printf("\n");
        }
    }
    return 0;
}
