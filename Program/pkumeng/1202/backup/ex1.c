#include<stdio.h>
#include<malloc.h>
void main()
{
	char *a;//����һ���ַ�ָ��
	int n;//n�洢���鳤��

	printf("���鳤�ȣ�");
	scanf("%d",&n);

                a=(char *)malloc(n*sizeof(char));  //���������n*char���ʹ�С�Ŀռ�
	printf("����%d��Ԫ��",n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
	}
	printf("���������");
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
}
