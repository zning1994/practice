//������ָ��
//1��ָ������ں����е�Ӧ��
#include<stdio.h>
//argc��¼�����в����ĸ���
//argv��ÿһ�������в�����ʲô
//���ã�������վ���п�ݷ�ʽ�ٳ֣�Ŀ�괰�ڼӵľ��������в�����
//�������Ǽ���ö����ĺ͡�
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int i,sum=0;
    for(i=1;i<argc;i++)
    {
        //atoi���ַ����������
       sum+=atoi(argv[i]);
    }
    printf("%d",sum);
    return 0;
}
