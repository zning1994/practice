#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
    int a[2][3]={1,2,3,4,5,6};
    //a[i]中i表示第i行的地址。
    int i,j;
        for(i=0;i<2;i++)
    {
        printf("a[i]=%x\n",a[i]);
        for(j=0;j<3;j++)
            printf("%x ",a[i]+j);
        putchar('\n');
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            printf("%4d",*(*(a+i)+j));
        putchar('\n');
    }
    return 0;
}
