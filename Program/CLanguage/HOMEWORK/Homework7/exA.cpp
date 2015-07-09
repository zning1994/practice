#include<iostream>
using namespace std;
#define Max 10000
int main()
{
    int score[Max];
    double s[Max];
    int n,time,count=0;
    double a;
    int c;
    double b;
    for(int i=0; i<Max; i++)
        score[i]=0;
    cout<<"人数:";
    cin>>n;
    for(int j=0; j<n; j++)
    {
        cin>>a;
        c=a*100;
        score[c]++;
    }
    time=score[0];
    for(int j=1; j<Max; j++)
    {
        if(score[j]>time)
        {
            time=score[j];
            b=j;
        }
    }
    for(int j=0; j<Max; j++)
        if(score[j]==time&&j!=b)
            s[count++]=j;
    cout<<"最多的次数是："<<b/100<<" ";
    for(int i=0; i<count; i++)
        cout<<s[i]/100<<" ";
    return 0;
}
