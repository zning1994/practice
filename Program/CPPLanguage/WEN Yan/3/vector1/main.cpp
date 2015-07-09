#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void display (vector<int> &v) {
    for (vector<int>::size_type i=0; i<v.size(); i++)
        cout<<v[i]<<"  ";
    cout<<endl;
}

int main(){

    ///初始化
    vector<int> v1;             	///定义只有0个元素的向量v1、v2

    int a[]={1,2,3,4,5,6};
    vector<int> v3(a,a+6);          	///定义向量v3，并用a数组初始化该向量
	vector<int> v4(6);              	///定义具有6个元素的向量v4

	cout<<setiosflags(ios::left)<<setw(17)<<"construct, v1: ";display(v1);
	cout<<setw(17)<<"construct, v3: ";display(v3);
	cout<<setw(17)<<"construct, v4: ";display(v4);

	cout<<endl;


    ///插入
    v1.push_back(10);             	///在v1向量的尾部加入元素10
    v1.push_back(11);
    v1.push_back(12);
    cout<<setw(17)<<"push_back, v1: ";display(v1);

    v1.insert(v1.begin(),30);    	///将30插入到v1向量的最前面
    v1.insert(v1.begin()+2,5,50);   ///将连续5个50插入到v1向量位置为2处
    cout<<setw(17)<<"insert, v1: ";display(v1);

    cout<<endl;

    ///访问和设值
    cout<<"v1 front: "<<v1.front()<<"  back: "<<v1.back()<<endl;
    for (vector<int>::size_type i=0; i<v1.size(); i++) {
        v1[i] = v1[i]+1;
    }
    cout<<setw(17)<<"index visit, v1: ";display(v1);
    cout<<endl;


    ///赋值操作
    vector<int> v2;
    v2=v1;                       		///将v1赋值给v2
    cout<<setw(17)<<"copy, v2: "; display(v2);

    v2.assign(3,10);                	///将v2的设置为包含3个元素且值均为10
    cout<<setw(17)<<"assign, v2: "; display(v2);

    v1.swap(v2);                     ///交换v1和v2
    cout<<setw(17)<<"swap, v1: "; display(v1);
    cout<<setw(17)<<"swap, v2: "; display(v2);

    v2.resize(7);       			    ///重置向量v2的大小
    cout<<setw(17)<<"resize, v2: "; display(v2);

    cout<<endl;


    ///删除元素
    v2.pop_back();                            ///删除最后一个元素
    cout<<setw(17)<<"pop back, v2: ";display(v2);
    v2.erase(v2.begin()+1);                   ///删除位置为1的元素
    cout<<setw(17)<<"erase, v2: ";display(v2);
    v2.erase(v2.begin()+1, v2.begin()+3);     ///删除始于位置1的3个元素
    cout<<setw(17)<<"erase, v2: ";display(v2);
    v2.clear();                               ///清除所有元素
    cout<<setw(17)<<"clear, v2: ";display(v2);


}
