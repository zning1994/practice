#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b, int k)
{
    int ret = 0;
    int tmp,i;

    // ˫��ѭ���ж��Ƿ��������k(��Ϊʱ��ȽϽ��������ַ���Ч�ʿ��ܲ�̫��)
    for (i = a; i <= b; i++)
    {
        tmp = abs(i); // ����ֵ�Ը������д���
        while (tmp != 0)
        {
            if (tmp % 10 == k)
            {
                ret += i;
                break;
            }

            tmp /= 10;
        }
    }

    return ret;
}

int main()
{
    int a, b, k, m, i, *ret;

    scanf("%d", &m);

    // ��̬�����������ڱ�����
    ret = (int *)malloc(sizeof(int) * m);

    // ��������
    i = m;
    while (i > 0)
    {
        scanf("%d %d %d", &a, &b, &k);
        ret[m - i] = sum(a, b, k); // �����ͬʱ������������
        i--;
    }

    // ������(������������ԣ��ܵõ���ȷ���)
    while (i < m) printf("%d\n", ret[i++]);

    free(ret); // �ͷ��ڴ�

    return 0;
}
