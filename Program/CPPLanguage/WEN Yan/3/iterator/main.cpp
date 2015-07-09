#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(){
		int a1[]={100,90,80,70,60};
		vector<int> v1(a1, a1+5);
		set<int> s1(a1,a1+5);
		vector<int> v2(v1.begin()+2,v1.end());

        vector<int>::iterator viter;    ///各个容器都有自己的迭代器类型
        set<int>::iterator siter;

        for(viter=v2.begin();viter!=v2.end();viter++)///通过迭代器遍历元素
			cout<<*viter<<"\t";
		cout<<endl;

//		for(siter=s1.begin();siter!=s1.end();siter++)///通过迭代器遍历元素
//			cout<<*siter<<"\t";
//		cout<<endl;

//		///通过迭代器反向输出v1的所有元素
//		for(viter=--v1.end();viter>=v1.begin();viter--){
//			cout<<*viter<<"\t";
//		}
//		cout<<endl;
//
//        cout<<"reverse:"<<endl;
//        vector<int>::reverse_iterator rev; ///反向迭代器
//		for(rev=v1.rbegin();rev!=v1.rend();rev++) ///反向遍历元素
//			cout<<*rev<<"\t";
//		cout<<endl;

        viter = v1.begin();
        siter = s1.begin();
        viter[3] = 1;
//        siter[3] = 1; //error set没有下标访问能力

		return 0;
}
