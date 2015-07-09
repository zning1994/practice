#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include <malloc.h>
#include<time.h>
main()
{
    int *a,*p,i=0;
    int N;//n存储数组长度
    printf("请输入你想要的数组长度：");
    scanf("%d",&N);
    a=(int *)malloc(N*sizeof(int));  //这里给它分n*char类型大小的空间
    p=a;
    printf("请稍候……\n");
    while (++i<=N)
    {
        *p++=rand()%100;
    }
    printf("=========\n");
    printf("得出结果\n");
    while (--i>0)
    {
        printf("a[%d]=%3d,",N-i+1,a[N-i]);//输出数组内容作为参照，与题意要求无关，可删除本行
        printf("逆序后a[%d]=%3d\n",N-i+1,*(--p));//通过指针接受输出
    }
}
