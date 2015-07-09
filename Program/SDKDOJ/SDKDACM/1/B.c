#include<stdio.h>
int main()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    for(i=1; i<=n; i++)
    {
        if(m%2==0)
        {
            printf("in%d.txt\n",m);
            m++;
        }
        else
        {
            printf("in%d.dat\n",m);
            m++;
        }

    }
    return 0;
}
