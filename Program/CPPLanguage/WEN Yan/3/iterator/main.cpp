#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(){
		int a1[]={100,90,80,70,60};
		vector<int> v1(a1, a1+5);
		set<int> s1(a1,a1+5);
		vector<int> v2(v1.begin()+2,v1.end());

        vector<int>::iterator viter;    ///�������������Լ��ĵ���������
        set<int>::iterator siter;

        for(viter=v2.begin();viter!=v2.end();viter++)///ͨ������������Ԫ��
			cout<<*viter<<"\t";
		cout<<endl;

//		for(siter=s1.begin();siter!=s1.end();siter++)///ͨ������������Ԫ��
//			cout<<*siter<<"\t";
//		cout<<endl;

//		///ͨ���������������v1������Ԫ��
//		for(viter=--v1.end();viter>=v1.begin();viter--){
//			cout<<*viter<<"\t";
//		}
//		cout<<endl;
//
//        cout<<"reverse:"<<endl;
//        vector<int>::reverse_iterator rev; ///���������
//		for(rev=v1.rbegin();rev!=v1.rend();rev++) ///�������Ԫ��
//			cout<<*rev<<"\t";
//		cout<<endl;

        viter = v1.begin();
        siter = s1.begin();
        viter[3] = 1;
//        siter[3] = 1; //error setû���±��������

		return 0;
}
