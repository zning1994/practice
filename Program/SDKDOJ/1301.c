/*
这道题之前就看到过了，只是一直不知道怎么去判断什么才是IP地址，直到今天参考
了别人的代码才知道，IP地址应该满足如下条件：
1.  '.'有且只能有3个
2.  4个放数字的位置，长度应该在1~3之间(含边界)
3.  每个数字应该：1~255(含边界)
4.  不能有特殊字符
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
		//'.'有且只能有3个
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


		//不能有特殊字符
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


		//4个放数字的位置，长度应该在1~3之间(含边界)
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


		//每个数字应该：1~255(含边界)
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
