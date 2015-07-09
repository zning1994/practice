#include<stdio.h>
int main()
{
    //freopen("in.txt","w",stdout);
    int i,j;
    for(i=1; i<=9; i++)
        for(j=1; j<=9; j++)
        {
            if(i==j)
            {
                printf("%d x %d = %d\n",j,i,i*j);
                break;
            }
            else
            {
                printf("%d x %d = %d\n",j,i,i*j);
            }
        }
    return 0;
}
