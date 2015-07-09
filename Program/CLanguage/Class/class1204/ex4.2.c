#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
    int (*p)[4],i,j;
    int a[3][4];
    for(i=0; i<3; i++)
        for(j=0; j<4; j++)
            a[i][j]=i*10+j;
    i=0;
    for(p=a; p<a+3; p++)
    {
        printf("p=%x,a[%d]=%x\n",p,i,a[i]);
        for(j=0; j<4; j++)
            printf("%5d",(*p)[j]);
        putchar('\n');
    }
    return 0;
}
