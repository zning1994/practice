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
    printf("������һ������50С��10000����ֵ���ó����������������ȡֵ��\n");
    scanf("%d",&N);
    for(i=0; i<4; i++)
        for(j=0; j<5; j++)
        {
            aa=rand()%N;
            pp=&aa;
            a[i][j]=*pp;
        }
    printf("�Ѿ���ָ�����������������£�\n");
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
    printf("����ƽ�������£���ȷ��С�������λ����\n");
    while (i<4)
    {
        printf("%.2lf\n",b[i]);
        i++;
    }

}
