#include <iostream>
#include <cstdio>
using namespace std;
int w[1000002],bag[20000005];
int main()
{
    int n,c;
    while(scanf("%d %d",&n,&c)!=EOF)
    {
        int sum = 0;
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&w[i]);
            sum += w[i];
        }
        for(int i=1; i<=c; i++)
            bag[i] = 0;
        for(int i=1; i<=n; i++)
            for(int k=sum; k>=w[i]; k--)
            {
                if(bag[k] < bag[k-w[i]] + w[i])
                    bag[k] = bag[k-w[i]] + w[i];
            }
        int min = INT_MAX;
        for(int i=c; i<=sum; i++)
        {
            if( bag[i] >= c && bag[i] - c < min )
                min = bag[i] - c;
        }
        cout << min << endl;
    }
    return 0;
}
