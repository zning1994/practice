//Eg7-11.cpp
#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void display (vector<int> &v) {
    for (vector<int>::size_type i=0; i<v.size(); i++)
        cout<<v[i]<<"  ";
    cout<<endl;
}

int main(){
    int a1[]={-2,10,30,12,6,7,12,10,9,10};

    vector<int> v1(a1,a1+10);	///��a1��ʼ��v1
    vector<int> v2(a1+4,a1+7);  ///��a1��Ƭ�� {6,7,12} ��ʼ��a2
    cout<<setiosflags(ios::left)<<setw(15)<<"v1: ";display(v1);
    cout<<setw(15)<<"v2: ";display(v2);

    vector<int>::iterator a = find(v1.begin(), v1.end(), 12); ///����Ԫ��
    vector<int>::iterator b = search(v1.begin(), v1.end(), v2.begin(), v2.end()); ///����Ƭ��
    int c = count(v1.begin(), v1.end(), 10); ///����

    cout<<setw(15)<<"find 12: "<<distance(v1.begin(),a)<<endl; ///distance �������ľ���
    cout<<setw(15)<<"search12 6 7: "<<distance(v1.begin(),b)<<endl;
    cout<<setw(15)<<"count 10: "<<c<<endl;

    sort (v1.begin(), v1.end());
    cout<<setw(15)<<"sort, v1: ";display(v1);

    vector<int> v3(13);
    merge( v2.begin(), v2.end(), v1.begin(), v1.end(),v3.begin());///����ϲ�
    v1.insert(v1.end(), v2.begin(), v2.end()); ///����ϲ�
    cout<<setw(15)<<"merge, v3: ";display(v3);
    cout<<setw(15)<<"insert, v1: ";display(v1);

}
