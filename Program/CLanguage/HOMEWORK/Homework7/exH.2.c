#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//��a����b��b����aû������������b��a�ı�����a��b��Լ��������Ҫ��b��Ϊ0�����0�����������ı�����������������0��Լ����������0������Լ����
int main()
{
	    freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout);
	int a,b,c,k;
    for(;scanf("%d %d",&b,&a)!=EOF;)
    {
	   if(b==0)
	   {
		    printf("%d 0\n",a);continue;
	   }
	   if(a==0)
	   {
			printf("%d 0\n",b);continue;
	   }
	   c=a*b;
	   if(b<a)
	   {
		   a=a+b;
	       b=a-b;
		   a=a-b;
	   }
	   k=b%a;
	   while(k!=0)
	   {
		   b=a;
	       a=k;
	       k=b%a;
	  }
      printf("%d %d\n",a,c/a);
	}
}

