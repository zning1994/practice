/*
�����֮ǰ�Ϳ������ˣ�ֻ��һֱ��֪����ôȥ�ж�ʲô����IP��ַ��ֱ������ο�
�˱��˵Ĵ����֪����IP��ַӦ����������������
1.  '.'����ֻ����3��
2.  4�������ֵ�λ�ã�����Ӧ����1~3֮��(���߽�)
3.  ÿ������Ӧ�ã�1~255(���߽�)
4.  �����������ַ�
*/

#include"stdio.h"
#include"string.h"
int main()
{
	int flag;
	char str[111];
	int temp;
	int i,l;
	int place[10],k;
	while(gets(str)!=0)
	{
		//'.'����ֻ����3��
		place[0]=-1;
		k=1;
		temp=0;
		for(i=0;str[i];i++)	if(str[i]=='.')	{temp++;place[k]=i;k++;}
		if(temp!=3)
		{
			printf("NO\n");
			continue;
		}
		place[k]=i;
		k++;


		//�����������ַ�
		flag=0;
		for(i=0;str[i];i++)
		{
			if(!((str[i]=='.')||('0'<=str[i]&&str[i]<='9')))
			{
				printf("NO\n");
				flag=1;
				break;
			}
		}
		if(flag==1)	continue;


		//4�������ֵ�λ�ã�����Ӧ����1~3֮��(���߽�)
		flag=0;
		for(i=1;i<k;i++)
		{
			if(place[i]-place[i-1]==1||place[i]-place[i-1]>4)
			{
				printf("NO\n");
				flag=1;
				break;
			}
		}
		if(flag==1)	continue;


		//ÿ������Ӧ�ã�1~255(���߽�)
		flag=0;
		for(i=1;i<k;i++)
		{
			temp=0;
			for(l=place[i-1]+1;l<place[i];l++)
			{
				temp*=10;
				temp+=str[l]-'0';
			}
			if(temp>=256)
			{
				printf("NO\n");
				flag=1;
				break;
			}
		}
		if(flag==1)	continue;


		printf("YES\n");
	}
	return 0;
}
