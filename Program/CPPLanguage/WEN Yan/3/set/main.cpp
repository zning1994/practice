//Eg7-11.cpp
#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
		int a1[]={-2,0,30,12,6,7,12,10,9,10};

		set<int> set1(a1,a1+10);	//����Ӵ�С�������������
		set1.insert(12);
		set1.insert(12);		//�򼯺ϲ���Ԫ��
		set1.insert(4);

		for(set<int>::iterator p1=set1.begin();p1!=set1.end();p1++)
			cout<<*p1<<"  ";               	   //��������е����ݣ����ǴӴ�С��
        cout<<endl;
        cout<<"count 12 in set1 : "<<set1.count(12)<<endl<<endl;

        multiset<int> set2(a1,a1+10);
        set2.insert(12);
		set2.insert(12);		//�򼯺ϲ���Ԫ��
		set2.insert(4);

		for(set<int>::iterator p2=set2.begin();p2!=set2.end();p2++)
			cout<<*p2<<"  ";               	   //��������е����ݣ����ǴӴ�С��
        cout<<endl;
        cout<<"count 12 in set2 : "<<set2.count(12)<<endl;

}
