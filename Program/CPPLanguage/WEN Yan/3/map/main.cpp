//Eg7-12.cpp
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
		string name[]={"张大年","刘明海","李煜"};		///雇员姓名
		double salary[]={1200,2000,1200};				///雇员工资

		map<string,double> salmap;							///用映射存储姓名和工资

        ///插入
		for(int i=0;i<3;i++)
			salmap.insert(make_pair(name[i],salary[i]));  ///插入映射对

		salmap["tom"]=3400;                          ///下标运算
		salmap["bob"]=2000;

        ///输出
        for(map<string,double>::iterator p=salmap.begin();p!=salmap.end();p++)	///输出映射中的全部元素
			cout<<p->first<<"\t"<<p->second<<endl;		///输出元素的键和值

        ///修改
        salmap["tom"] = 5000;
        cout<<endl<<"修改后:"<<endl;
        for(map<string,double>::iterator p=salmap.begin();p!=salmap.end();p++)	///输出映射中的全部元素
			cout<<p->first<<"\t"<<p->second<<endl;		///输出元素的键和值

        ///查找
        string person;
		cout<<"输入查找人员的姓名：";
		cin>>person;
		cout<<salmap[person]<<endl;
}
