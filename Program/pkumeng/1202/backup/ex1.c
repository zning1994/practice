#include<stdio.h>
#include<malloc.h>
void main()
{
	char *a;//定义一个字符指针
	int n;//n存储数组长度

	printf("数组长度：");
	scanf("%d",&n);

                a=(char *)malloc(n*sizeof(char));  //这里给它分n*char类型大小的空间
	printf("输入%d个元素",n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
	}
	printf("数组输出：");
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
}
