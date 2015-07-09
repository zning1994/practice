#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char a[100],*p;
    int i=0,j;
    cout<<"Please enter a string of n characters"<<endl;
    while((a[i++]=getchar())!='\n')
    {

    }
    for(p=a+i-1; p>=a; p--)
        cout<<*p<<"";
    return 0;
}

