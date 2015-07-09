#include <stdio.h>
#include <string.h>
#define N 500000
int a[N];
int main()
{
    int i,tmp;
    for(i=0; i<10; i++)
        a[i]=0;
    for(i=0; i<10; i++)
    {
        scanf("%d",&tmp);
        a[tmp]++;
    }
    for(i=0;i<10;i++)
        printf("%d:%d\n",i,a[i]);
    return 0;
}
