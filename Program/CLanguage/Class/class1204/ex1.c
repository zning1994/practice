//��̬�����ڴ�֮�����֪ʶ�Ľ���
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define N 1000
//#include<memory.h>
int main()
{
    int *p,a;
    //malloc���ص���void�͵�ָ�룬���������õ�a��int�ͣ������Ҫǿ��ת��ָ���������͡�
    a=(int *)malloc(N*sizeof(int));
    //�������ڴ����������жϣ����ж��Ƿ����㹻�ڴ�ռ�ȥ�á�
    if(p==NULL)
    {
        puts("memory full!\n");
        return 0;
    }
    //p[i]<==>*(p+1)
    for(i=0;i<n;i++)
    {
        p[i]=i+1;
        printf("%3d",p[i]);
    }
    //�ͷ��ڴ棨���������ڴ�ռ�ú��ڴ�й¶��
    free(p);
    return 0;
}
