#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include <malloc.h>
#include<time.h>
main()
{
    int *a,*p,i=0;
    int N;//n�洢���鳤��
    printf("����������Ҫ�����鳤�ȣ�");
    scanf("%d",&N);
    a=(int *)malloc(N*sizeof(int));  //���������n*char���ʹ�С�Ŀռ�
    p=a;
    printf("���Ժ򡭡�\n");
    while (++i<=N)
    {
        *p++=rand()%100;
    }
    printf("=========\n");
    printf("�ó����\n");
    while (--i>0)
    {
        printf("a[%d]=%3d,",N-i+1,a[N-i]);//�������������Ϊ���գ�������Ҫ���޹أ���ɾ������
        printf("�����a[%d]=%3d\n",N-i+1,*(--p));//ͨ��ָ��������
    }
}
