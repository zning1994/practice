#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
//    freopen("in","r",stdin);
//    freopen("out","w",stdout);
    int m,i,clspeo[26],x,sum=0,alpha=0,sumsample;
    scanf("%d",&m);
    for(i=0; i<m; i++)
    {
        scanf("%d",&clspeo[i]);
        sum+=clspeo[i];
    }
    sumsample=sum;
    while(scanf("%d",&x)!=EOF)
    {
        while(x/sum!=0)
            x-=sum;
        for(i=0; i<m; i++)
            if(x==0)
            {
                printf("Class %c : %d\n",65+m-1,clspeo[m-1]);
                break;

            }
            else if(x<=clspeo[i])
            {
                printf("Class %c : %d\n",65+alpha,x);
                break;
            }
            else
            {
                x-=clspeo[i];
                alpha++;
            }
        alpha=0,sum=sumsample;
    }
    return 0;
}
