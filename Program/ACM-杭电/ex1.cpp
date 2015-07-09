#include<iostream>
using namespace std;
int main()
{
    int i,n,sum;
    while(cin>>n&&n!=0)
    {
      sum=0;
     int *num=new int[n];
     for(int i=0;i<n;i++)
     {
        cin>>num[i];
     }
     for(i=0;i<n;i++)
     {
         sum+=num[i];
     }
     cout<<sum<<"\n";
    }
}
