#include <iostream>         //use cin and cout
#include<cstdlib>
#include<cstring>
#include<cstdio>
using namespace std;
//����2��c_size��Χ�ڵ�����
const int c_size = 100;
void print(int *data, int data_size)
{
    int num = 0;
    for (int i=2; i<=data_size; i++)
    {
        if (data[i] == 0)
            cout << i << "\n";
    }
    cout << endl;
}
//ʹ��ɸѡ����������
void cal_prime(int *data, int data_size)
{
    //��2��ʼʹ��ɸѡ������
    for (int i=2; i<=data_size; i++)
        for (int j=2; i*j<=data_size; j++)
        {
            //���������δɸѡ��
            //���Ǹ���ѡ��
            if (data[i*j] == 0)
                data[i*j] = -1;
            //����Ѿ�ɸѡ��,�������Ĵ�ɸѡ
            //�����´�ɸѡ
            else
                continue;
        }
}
int main()
{
    //�������鲢��ʼ��
    //�˷ѵ�һ������ռ�
    int *data = new int[c_size+1];
    memset( data, 0, sizeof(int)*(c_size+1) );
    //��������
    cal_prime(data, c_size);
    //��ӡ�����������
    print(data, c_size);
    return 0;
}
