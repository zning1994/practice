#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
#include<time.h>
int main()
{
    int a[4][5],*pp,aa;
    double *p,*b;
    int i,j,k,c=0,N;
    srand(time(NULL));
    printf("请输入一个大于50小于10000的数值，让程序来进行随机数的取值：\n");
    scanf("%d",&N);
    for(i=0; i<4; i++)
        for(j=0; j<5; j++)
        {
            aa=rand()%N;
            pp=&aa;
            a[i][j]=*pp;
        }
    printf("已经用指针输入的随机数组如下：\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%6d ",a[i][j]);
        }
        printf("\n");
    }
    b=(double *)malloc(6*sizeof(double));
    p=b;
    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
            c+=a[i][j];
        *p++=c*1.0/5;
        c=0;
    }
    i=0;
    printf("各行平均数如下（精确到小数点后两位）：\n");
    while (i<4)
    {
        printf("%.2lf\n",b[i]);
        i++;
    }

}
