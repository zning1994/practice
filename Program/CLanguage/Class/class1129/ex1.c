//Ԥ��������֮�궨��
#include<stdio.h>
#define N 10
#define AGE unsigned int
//�궨��ĺ������ԣ�ԭ���հᡣ����FUN(2+3)�Ǽ���2+3*2+3��������5*5��������Ӧ��()
#define FUN(x) x*x
//�����ǵü�����~smartdefrag
#define FUN2(x) ((FUN(x))/(FUN(x)))
#define FUN3(x,y,z) y=((x)*(x)),z=((x)+1)
//����FUN4��main����FUN4(a)ʱ�궨�屨��
#define FUN4(x,y,z) y=((x)*(x)),z=((x)+1)
//�궨��ͺ���������
//1���궨��û���������͵����⣬������ǿ�����������͡�
//2���궨��ĺ���Ч��Ҫ�ߡ�����������Ҫջ�Ĳ��������궨����Ԥ�����׶ξ��滻�ˡ�
//3���Ժ�����˵������ֵ����һ�������궨����Է��ض��ֵ������FUN3��
//ȱ�㣺1���궨�岻�����﷨��飬����������
//2�����帴�Ӻ���ʱ���ʺ����ú궨��д
//3�������Ͳ�����֮��ǧ���ӿո�
int fun(int x)
{
    return x*x;
}
int main()
{
    int;
    return 0;
}