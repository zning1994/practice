//��������ZNing��������
//���õ���ԭ�򽫴�������Դ���ύ���ſ�ͬѧOJ
//�ش���������Դ���ɱ�����д�����ſ�ͬѧ�޹ء�
//��л֧�֣�лл������
#include<stdio.h>
int main()
{
    int k,m,n,i=1;
    scanf("%d%d%d",&k,&m,&n);
    if(m<n)
        printf("%d",m);
    else
        printf("%d",n);
    i=m<n?m+1:n+1;
    for(;i<=k;i++)
    {
        if(i%m!=0&&i%n==0||i%n!=0&&i%m==0)
            printf(" %d",i);
    }
    return 0;
}

