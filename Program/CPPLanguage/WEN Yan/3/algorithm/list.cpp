//Eg7-11.cpp
#include<iostream>
#include<iomanip>
#include<string>
#include<list>
#include<algorithm>

using namespace std;

void display (list<int> &l) {
    for (list<int>::iterator ite=l.begin(); ite!=l.end(); ite++)
        cout<<*ite<<"  ";
    cout<<endl;
}

int main(){
		int a1[]={-2,10,30,12,6,7,12,10,9,10};

		list<int> v1(a1,a1+10);	///用a1初始化v1
		list<int> v2(a1+3,a1+6);  ///用a1的片段 {12，6，7} 初始化a2
        cout<<setw(15)<<"construct, v1: ";display(v1);
        cout<<setw(15)<<"construct, v2: ";display(v2);

		int a = find(v1.begin(), v1.end(), 12);
		int b = search(v1.begin(), v1.end(), v2.begin(), v2.end());
		int c = count(v1.begin(), v1.end(), 10);
        cout<<"find 12: "<<a<<endl;
        cout<<"search12 6 7: "<<b<<endl;
        cout<<"count 10: "<<c<<endl;

        list<int> v3;
        merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3);
        cout<<setw(15)<<"merge, v3: ";display(v3);

        sort (v3.begin(), v3.end());
        cout<<setw(15)<<"sort, v3: ";display(v3);

}


