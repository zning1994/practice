/************************************************
这题不难，根据题意逐行扫描处理就可以了。如果想到使用边沿哨兵可以大大减少处理难度

思路:思路很简单就是从头到尾一次遍历一遍读进来的数据，遇到'*'就在一个对应的表示结
果的二维数组res中向周围8个方向上依次做相应的地雷数统计操作。最后在遍历一遍二维数
组res把结果按要求输出就可以了。
************************************************/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int res[102][102];
char str[102][102];

int main()
{
    freopen("out.txt","w",stdout);
    int cases=0;
    int m,n;
    int i,j;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        if(m==0&&n==0)
        {
            break;
        }
        memset(res,0,sizeof(res));
        cases++;
        if(cases!=1)
        {
            printf("\n");
        }
        for(i=1;i<=m;i++)
        {
            scanf("%s",str[i]);
        }
        for(i=1;i<=m;i++)
            for(j=0;j<n;j++)
            {
                if(str[i][j]=='*')
                {
                   res[i][j+1]=-99999;
                   res[i-1][j+1]+=1;
                   res[i+1][j+1]+=1;
                   res[i][j+2]+=1;
                   res[i][j]+=1;
                   res[i-1][j]+=1;
                   res[i-1][j+2]+=1;
                   res[i+1][j]+=1;
                   res[i+1][j+2]+=1;
                }
            }
        printf("Field #%d:\n",cases);
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                printf("%c",res[i][j]>=0?'0'+res[i][j]:'*');
            }
            printf("\n");
        }
    }
    return 0;
}

