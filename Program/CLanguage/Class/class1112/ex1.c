//ถþฮฌสýื้
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int a[3][4],b,c;
    int i,j;
    srand(time(NULL));
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            a[i][j]=rand()%100;
    }
    for(i=0;i<3;i+)
    {
        for(j=0;j<4;j++)
            printf("%d",a[i][j]);
    }
    return 0;
}
