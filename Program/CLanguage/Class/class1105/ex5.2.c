//���������Լ��:շת�����
//��ZNing�������մ�һ��
#include<stdio.h>
int main()
{
    int a,b,c,k;
    for(; scanf("%d%d",&b,&a)!=EOF;)
    {
        //check the two numbers == 0 or not.
        if(b==0)
        {
            printf("%d 0\n",a);
            continue;
        }
        if(a==0)
        {
            printf("%d 0\n",b);
            continue;
        }
        c=a*b;
        //Change the two numbers.Fellowing the smallest is first line.
        if(b<a)
            a=a+b,b=a-b,a=a-b;
        //��������жϵ���������С���Ǹ����ǲ��Ǵ��ɾ��������Ǹ����Ĺ����ӡ�
        //������ǵĻ����ǽ�ִ��for�������ж������Ĺ����ӡ�
        //����˵����������С�������Լ����������������Ǹ�����С��������
        k=b%a;
        //���Ǹ���ŷ����õĶ��壨շת����������еļ��㡣ÿ�ε�ȡ��ʹ��b=a,a=k,
        //����С����Զ��a��������Զ��b�����˵��k==0ʱ�����ǿ���˵��ǰ�����ڵ�a���������������Լ����
        //����ʱc/a����ľ�����С��������
        for(; k!=0;)
            b=a,a=k,k=b%a;
        printf("%d %d\n",a,c/a);
    }
}
