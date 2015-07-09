#include <iostream>
#include <cstdio>
using namespace std;
class People
{
private:
int age;//年龄
char sex;//性别，用F表示女，M表示男。
public:
void setAge(int a)//设置年龄
{
    age=a;
}
void setSex(char b)//设置性别
{
    sex=b;
}
void printInfo()//显示信息
{
    cout<<"age:"<<age<<",sex:"<<sex<<endl;

}
};
int main()
{
    People Tom, Mary;
    int ageTom,ageMary;
    char sexTom,sexMary;
    cin>>ageTom>>sexTom;
    cin>>ageMary>>sexMary;
    Tom.setAge(ageTom);
    Mary.setAge(ageMary);
    Tom.setSex(sexTom);
    Mary.setSex(sexMary);
    Tom.printInfo();
    Mary.printInfo();
    return 0;
}
