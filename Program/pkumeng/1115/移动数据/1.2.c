#include<stdio.h>

int main()
{   void solve(int n,int m,int a[30]);
	int n,m;
	int a[30];
	int i,j;
	printf("请输入一个n值：");
	scanf("%d",&n);
	printf("\n");
	printf("请输入一个m值：");
	scanf("%d",&m);
	printf("\n");
	printf("请输入数组各项的值：");
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	solve(n,m,a);
	for(j=0;j<=n-1;j++)
		printf("%d",a[j]);
	return 0;
}
void solve(int n,int m,int a[30])
{		int i,t;
        t=a[n-1];
		for(i=n-1;i>=0;i--)
	    a[i+1]=a[i];
		a[0]=t;
		if(m!=0)
		solve(n,m-1,a);
}