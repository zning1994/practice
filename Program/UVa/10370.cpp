#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int grade[1100];
int main()
{
    int C,sum=0,good=0,per;
    double ave=0;
    cin>>C;
    while(C--)
    {
        cin>>per;
        for(int i=0; i<per; ++i)
        {
            cin>>grade[i];
            sum+=grade[i];
        }
        ave=sum/(double)per;
        for(int i=0; i<per; ++i)
        {
            if(grade[i]>ave)
                good++;
        }
        printf("%.3lf%%\n",good*100.0/(double)per);
        ave=0,sum=0,good=0;
        memset(grade,0,sizeof(grade));
    }
    return 0;
}
