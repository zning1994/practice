#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
    int **p,i,j,k=1;
    p=(int**)malloc(sizeof(int*)*4);
    for(i=0; i<4; i++)
    {
        p[i]=(int*)malloc(sizeof(int)*(i+1));
        for(j=0; j<i+1; j++)
            p[i][j]=k++;
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<i+1; j++)
            printf("%3d",p[i][j]);
        putchar('\n');
    }
    for(i=0; i<4; i++)
        free(p[i]);
    free(p);
//    int *q;
//    int a=10;
//    q=&a,p=&q;
//    printf("%d",**p);
    return 0;
}
