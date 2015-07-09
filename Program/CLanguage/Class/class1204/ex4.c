#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
    int (*p)[4],i;
    int a[4]={1,2,3,4};
    p=&a;
    for(i=0;i<4;i++)
        printf("%5d",(*p)[i]);
    return 0;
}
