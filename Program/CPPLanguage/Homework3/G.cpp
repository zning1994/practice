#include <iostream>
#include <cstdio>
using namespace std;
class People
{
private:
int age;//����
char sex;//�Ա���F��ʾŮ��M��ʾ�С�
public:
void setAge(int a)//��������
{
    age=a;
}
void setSex(char b)//�����Ա�
{
    sex=b;
}
void printInfo()//��ʾ��Ϣ
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
