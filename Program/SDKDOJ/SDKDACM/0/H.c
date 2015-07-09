#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#define N 4000
int main()
{
    int j,i;
    int beg[24*N+10],end[24*N+10],time[24*4000],n;
    //对time进行操作，第一个是数组名，第二个是赋值的数
    memset(time,0,sizeof(time));
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        int x,y;
        scanf("%d%d",*&x,&y);
        for(j=x; j<=y; j++)
        {
            time[j]++;
        }
    }
    return 0;
}
