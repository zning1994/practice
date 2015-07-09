//Description
//�𳵿���ͨ�� swapping װ�ã� �����������ڳ����λ�á�
//��˳�����ÿ�ڳ���ı�ţ� ������𳵵ĳ��ᣬ ʹ�ó���ı������
//���������Ҫ�õ����� swapping װ�á�
//
//Type
//Sorting/Searching
//
//Analysis
//��Ŀʵ�����һ�������е����������
//�����кܶ࣬ �������� n ��С�� ֻҪ�������������� ���������Թ���
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

const int MAXN = 52;

int n;
int train[MAXN];

int main()
{
    int tot_case;
    scanf("%d", &tot_case);
    while (tot_case--)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%d", &train[i]);
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
                if (train[j] > train[j + 1])
                {
                    swap(train[j], train[j + 1]);
                    ans++;
                }
        printf("Optimal train swapping takes %d swaps.\n", ans);
    }

    return 0;
}
