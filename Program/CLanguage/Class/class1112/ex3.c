//��ά���飬����һ��һ�����Խ����ϵ����ֵ������±�
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 4
int main()
{
    int a[N][N],b,c,temp,max;
    int i,j,k;
    srand(time(NULL));
    for(i=0; i<N; i++)
    {
        for(j=0; j<4; j++)
            a[i][j]=rand()%100;
    }
    for(i=0; i<N; i++)
    {
        for(j=0; j<4; j++)
            printf("%4d ",a[i][j]);
        putchar('\n');
    }
    //��
    printf("��_��_��_��_��_��_��_��\n");
    for(j=0; j<=N-1; j++)
    {
        max=a[j][0];
        b=N-1;
        while(b>=0)
        {
            for(k=0; k<=N-1; k++)
            {
                if(a[j][k]>=max)
                    max=a[j][k];
            }
            b--;
        }
        printf("  Line:%d Max:%d\n",j+1,max);
    }
    //��
    printf("��_��_��_��_��_��_��_��\n");
    for(j=0; j<=N-1; j++)
    {
        max=a[0][j];
        b=N-1;
        while(b>=0)
        {
            for(k=0; k<=N-1; k++)
            {
                if(a[k][j]>=max)
                    max=a[k][j];
            }
            b--;
        }
        printf("  Follow:%d Max:%d\n",j+1,max);
    }
    //���Խ��ߣ�δŪ�꣩
//    printf("��_��_��_��_��_��_��_��\n");
//    for(j=0; j<=N-1; j++)
//    {
//        max=a[0][j];
//        b=N-1;
//        while(b>=0)
//        {
//            for(k=0; k<=N-1; k++)
//            {
//                if(a[k][k]>=max)
//                    max=a[k][k];
//            }
//            b--;
//        }
//        printf("  Follow:%d Max:%d\n",j+1,max);
//    }
    return 0;
}
