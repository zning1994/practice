//Eg7-12.cpp
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
		string name[]={"�Ŵ���","������","����"};		///��Ա����
		double salary[]={1200,2000,1200};				///��Ա����

		map<string,double> salmap;							///��ӳ��洢�����͹���

        ///����
		for(int i=0;i<3;i++)
			salmap.insert(make_pair(name[i],salary[i]));  ///����ӳ���

		salmap["tom"]=3400;                          ///�±�����
		salmap["bob"]=2000;

        ///���
        for(map<string,double>::iterator p=salmap.begin();p!=salmap.end();p++)	///���ӳ���е�ȫ��Ԫ��
			cout<<p->first<<"\t"<<p->second<<endl;		///���Ԫ�صļ���ֵ

        ///�޸�
        salmap["tom"] = 5000;
        cout<<endl<<"�޸ĺ�:"<<endl;
        for(map<string,double>::iterator p=salmap.begin();p!=salmap.end();p++)	///���ӳ���е�ȫ��Ԫ��
			cout<<p->first<<"\t"<<p->second<<endl;		///���Ԫ�صļ���ֵ

        ///����
        string person;
		cout<<"���������Ա��������";
		cin>>person;
		cout<<salmap[person]<<endl;
}
