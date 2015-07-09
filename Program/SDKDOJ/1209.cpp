#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int Y,N,index,temp,i,k,t,j,c;
    int a[10000],b[10000];
    c=1;
    scanf("%d",&Y);
    while(Y!=c)
    {
        while(scanf("%d",&N)!=EOF)
        {
            if(N==0)
                break;
            for(i=0; i<N; i++)
                scanf("%d%d",&a[i],&b[i]);
            for(k=0; k<N-1; k++)
            {
                index=k;
                for(i=k+1; i<N; i++)
                    if(b[index]<b[i])
                        index=i;
                temp=b[index];
                b[index]=b[k];
                b[k]=temp;
                temp=a[index];
                a[index]=a[k];
                a[k]=temp;
            }
            t=a[0]+b[0];
            int j=b[0];
            for(i=0; i<N-1; i++)
            {
                if(a[i+1]+b[i+1]>=j)
                {
                    t+=a[i+1]+b[i+1]-j;
                    j=b[(i+1)];
                }
                else
                    j-=a[(i+1)];
            }
            printf("Case %d: %d\n",c,t);
            c++;
        }
    }
    return 0;
}
