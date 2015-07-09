///相关资料：
///Catalan数的分析和应用：http://blog.csdn.net/dlyme/article/details/2532831
///1.2	出栈序列统计：http://blog.csdn.net/hbhszxyb/article/details/6861441（页面底部有关于回溯法的讲解）
#include <stdio.h>
#include <string.h>
#include <math.h>
long long a[21];
long long chan[21];
int main()
{
    int i,j,n,m,t,x;
    long long s;
    scanf("%d",&n);
    memset(a,0,sizeof(a));
    if(n==1)
        printf("1\n");
    else if(n==2)
        printf("2\n");
    else
    {
        a[3]=1,a[2]=1;
        for(i=4; i<=n; i++)
        {
            for(j=1; j<=20; j++)
                chan[j]=a[j];
            memset(a,0,sizeof(a));
            for(j=1;j<=20;j++)
                if(chan[j]!=0)
                {
                    t=chan[j];
                    for(x=j+1;x>=2;x--)
                        a[x]+=t;
                }
        }
        for(i=1,s=0; i<=20; i++)
            s+=i*a[i];
        printf("%lld\n",s);
    }
    return 0;
}
