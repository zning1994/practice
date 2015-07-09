////有1，2，3，4个数字，能组成多少个互不相同无重复数字的三位数？都是多少？
#include<stdio.h>
int main()
{
    int i, j, k;
    int m=0;
    printf("Let's print these numbers.\n==================\n");
    for(i=1; i<5; i++)
        for(j=1; j<5; j++)
            for(k=1; k<5; k++)
            {
                if(i!=j&&k!=j&&i!=k)
                {
                    printf("%d%d%d\n",i,j,k);
                    m++;
                }
            }
    printf("==================\n");
    printf("It's common sense that 1,2,3,4 can build %d numbers.\n",m);
    return 0;
}
