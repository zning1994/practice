#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
    int *p[3];
    int i,j;
    for(i=0;i<3;i++)
    {
        p[i]=(int*)malloc(sizeof(int)*(2*i+1));
        for(j=0;j<i*2+1;j++)
            p[i][j]=10*i+j;
    }
    //p[i][j]<==>*(p]i]+j)<==>*(*(p+1)+j)
    for(i=0;i<3;i++)
    {
        for(j=0;j<2*i+1;j++)
            printf("%4d",p[i][j]);
        putchar('\n');
    }
    for(i=0;i<3;i++)
        free(p[i]);
    return 0;
}
