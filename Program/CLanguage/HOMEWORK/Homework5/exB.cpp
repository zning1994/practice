#include <iostream>         //use cin and cout
#include<cstdlib>
#include<cstring>
#include<cstdio>
using namespace std;
//计算2到c_size范围内的素数
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
//使用筛选法计算素数
void cal_prime(int *data, int data_size)
{
    //从2开始使用筛选法计算
    for (int i=2; i<=data_size; i++)
        for (int j=2; i*j<=data_size; j++)
        {
            //如果该数尚未筛选过
            //则标记该数选中
            if (data[i*j] == 0)
                data[i*j] = -1;
            //如果已经筛选过,则跳出改次筛选
            //进入下次筛选
            else
                continue;
        }
}
int main()
{
    //定义数组并初始化
    //浪费第一个数组空间
    int *data = new int[c_size+1];
    memset( data, 0, sizeof(int)*(c_size+1) );
    //计算素数
    cal_prime(data, c_size);
    //打印计算出的素数
    print(data, c_size);
    return 0;
}
