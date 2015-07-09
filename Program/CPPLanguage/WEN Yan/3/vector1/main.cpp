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

    ///��ʼ��
    vector<int> v1;             	///����ֻ��0��Ԫ�ص�����v1��v2

    int a[]={1,2,3,4,5,6};
    vector<int> v3(a,a+6);          	///��������v3������a�����ʼ��������
	vector<int> v4(6);              	///�������6��Ԫ�ص�����v4

	cout<<setiosflags(ios::left)<<setw(17)<<"construct, v1: ";display(v1);
	cout<<setw(17)<<"construct, v3: ";display(v3);
	cout<<setw(17)<<"construct, v4: ";display(v4);

	cout<<endl;


    ///����
    v1.push_back(10);             	///��v1������β������Ԫ��10
    v1.push_back(11);
    v1.push_back(12);
    cout<<setw(17)<<"push_back, v1: ";display(v1);

    v1.insert(v1.begin(),30);    	///��30���뵽v1��������ǰ��
    v1.insert(v1.begin()+2,5,50);   ///������5��50���뵽v1����λ��Ϊ2��
    cout<<setw(17)<<"insert, v1: ";display(v1);

    cout<<endl;

    ///���ʺ���ֵ
    cout<<"v1 front: "<<v1.front()<<"  back: "<<v1.back()<<endl;
    for (vector<int>::size_type i=0; i<v1.size(); i++) {
        v1[i] = v1[i]+1;
    }
    cout<<setw(17)<<"index visit, v1: ";display(v1);
    cout<<endl;


    ///��ֵ����
    vector<int> v2;
    v2=v1;                       		///��v1��ֵ��v2
    cout<<setw(17)<<"copy, v2: "; display(v2);

    v2.assign(3,10);                	///��v2������Ϊ����3��Ԫ����ֵ��Ϊ10
    cout<<setw(17)<<"assign, v2: "; display(v2);

    v1.swap(v2);                     ///����v1��v2
    cout<<setw(17)<<"swap, v1: "; display(v1);
    cout<<setw(17)<<"swap, v2: "; display(v2);

    v2.resize(7);       			    ///��������v2�Ĵ�С
    cout<<setw(17)<<"resize, v2: "; display(v2);

    cout<<endl;


    ///ɾ��Ԫ��
    v2.pop_back();                            ///ɾ�����һ��Ԫ��
    cout<<setw(17)<<"pop back, v2: ";display(v2);
    v2.erase(v2.begin()+1);                   ///ɾ��λ��Ϊ1��Ԫ��
    cout<<setw(17)<<"erase, v2: ";display(v2);
    v2.erase(v2.begin()+1, v2.begin()+3);     ///ɾ��ʼ��λ��1��3��Ԫ��
    cout<<setw(17)<<"erase, v2: ";display(v2);
    v2.clear();                               ///�������Ԫ��
    cout<<setw(17)<<"clear, v2: ";display(v2);


}
