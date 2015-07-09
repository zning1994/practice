#include <iostream>

using namespace std;
int fun(int n,int &rSquar,int &rCube);
int main()
{
    int n=5, rSquar, rCube;
    fun(n, rSquar, rCube);
    cout<<"rSquar="<<rSquar<<"  rCube="<<rCube<<endl;

}

int fun(int n,int &rSquar,int &rCube)
{
	if(n<0)
       return 1;
	rSquar=n*n;
	rCube=n*n*n;
	return 0;
}
