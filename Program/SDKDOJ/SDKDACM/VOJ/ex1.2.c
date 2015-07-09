#include<stdio.h>
int main()
{
    //freopen("in.txt","w",stdout);
    int i,j;
    for(i=1; i<=9; i++)
        for(j=1; j<=9; j++)
        {
            printf("%dx%d=%d",i,j,i*j);
            printf("\n");
        }
    return 0;
}
