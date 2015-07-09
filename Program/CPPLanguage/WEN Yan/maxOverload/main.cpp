#include<iostream>
using namespace std;

int abs(int x) {cout<<"in abs for int. "; return x>0?x:-x;}
float abs(float x) {cout<<"in abs for float. "; return x>0?x:-x;}
double abs(double x) {cout<<"in abs for double. "; return x>0?x:-x;}

int max(int a, int b) {cout<<"in max for int. "; return a>b?a:b;}
double max(float a, float b) {cout<<"in max for float. "; return a>b?a:b;}
double max(double a, double b) {cout<<"in max for double. "; return a>b?a:b;}

int main(){
		cout<<abs(-9)   <<endl;
		cout<<abs(-9.9f) <<endl;
		cout<<abs(-9.8)  <<endl;

        cout<<endl;

		cout<<max(1,2) <<endl;
		cout<<max(2.3f, 5.2f)<<endl;
		cout<<max(42.1, 2143.5)<<endl;
}
