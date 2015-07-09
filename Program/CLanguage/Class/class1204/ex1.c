//动态分配内存之申请等知识的讲解
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define N 1000
//#include<memory.h>
int main()
{
    int *p,a;
    //malloc返回的是void型的指针，而我们所用的a是int型，因此需要强制转换指针数据类型。
    a=(int *)malloc(N*sizeof(int));
    //申请完内存必须加以下判断，来判断是否有足够内存空间去用。
    if(p==NULL)
    {
        puts("memory full!\n");
        return 0;
    }
    //p[i]<==>*(p+1)
    for(i=0;i<n;i++)
    {
        p[i]=i+1;
        printf("%3d",p[i]);
    }
    //释放内存（否则会出现内存占用和内存泄露）
    free(p);
    return 0;
}
