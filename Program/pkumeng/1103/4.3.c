////��1��2��3��4�����֣�����ɶ��ٸ�������ͬ���ظ����ֵ���λ�������Ƕ��٣�
#include<stdio.h>
int main()
{
    int i, j, k;
    int m=0;
    printf("Let's print these numbers.\n==================\n");
    for(i=1; i<5; i++)
        for(j=1; j<5; j++)
            for(k=1; k<5; k++)
            {
                if(i!=j&&k!=j&&i!=k)
                {
                    printf("%d%d%d\n",i,j,k);
                    m++;
                }
            }
    printf("==================\n");
    printf("It's common sense that 1,2,3,4 can build %d numbers.\n",m);
    return 0;
}
