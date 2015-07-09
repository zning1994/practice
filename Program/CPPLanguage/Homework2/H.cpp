#include <iostream>
#include <cmath>
using namespace std;
int moveRight(int data,int num=1)
{
    return data/pow(10,num);
}
int main()
{
    int data,num;
    cin>>data>>num;
    cout<<moveRight(data,num)<<endl;
    cout<<moveRight(data)<<endl;
    return 0;
}
