#include<stdio.h>
int main()
{
    int N,i,j,k,m,temp;
    printf("请输入数字n：");
    scanf("%d",&N);
    printf("请输入数组数据: ");
    int a[N];
    for(i=0; i<N; i++)
        scanf("%d",&a[i]);
    printf("输入需要前移的数字的个数：");
    scanf("%d",&m);
    for(i=N-m,k=0; i<N; i++,k++)
    {
        temp=a[i];
        for(j=i-1; j>=k; j--)
            a[j+1]=a[j];
        a[k]=temp;
    }
    for(i=0; i<N; i++)
        printf("%d ",a[i]);
}
