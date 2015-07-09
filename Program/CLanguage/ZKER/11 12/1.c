#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define  N 4
int main()
{
    int a[N][N];
    int i,j,t;
    srand(time(NULL));
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
            a[i][j]=rand()%100;
    }

    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
            printf("%4d",a[i][j]);
        putchar('\n');
    }
    puts("-----------------");
    for (i=0; i<N-1; i++)
    {
        for (j=i+1; j<N; j++)
        {
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
            printf("%4d",a[i][j]);
        putchar('\n');
    }


}
