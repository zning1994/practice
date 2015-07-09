//二维数组，原地转置
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 4
int main()
{
    int a[N][N],b,c,temp;
    int i,j;
    srand(time(NULL));
    for(i=0;i<N;i++)
    {
        for(j=0;j<4;j++)
            a[i][j]=rand()%100;
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<4;j++)
            printf("%d ",a[i][j]);
//        printf("\n");

        for(j=0;j<4;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
        printf("\n");
        for(j=0;j<4;j++)
            printf("%d ",a[i][j]);
        putchar('\n');
    }
    return 0;
}
