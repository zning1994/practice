//��������������ʹ�ã�
#include<stdio.h>
int main()
{
    int a,b,i=0,nor=0,sum=0;
    scanf("%d",&a);
    nor=a;
    while(a>0)
        //�ڼ���sum+=b֮ǰ����ԭ������10��ʹ���λ�����ɽ����ݵ�����ϳ��µ���sum��
        //�����ǹؼ����ڿ�����δ��������ǵø�ϰ����
        //�������ĺô����ǣ����ǲ���Ҫ��ͳ���û����������λ������ֱ�Ӳ�������
        //ͬʱ�����������飬�����ڴ�ռ�á�
        sum=sum*10,b=a%10,sum=sum+b,a=a/10;
    if(sum==nor)
        printf("Yes");
    else
        printf("No");
    return 0;
}