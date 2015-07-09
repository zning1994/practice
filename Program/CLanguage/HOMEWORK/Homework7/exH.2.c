#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//若a整除b（b除以a没有余数），则b是a的倍数，a是b的约数，这里要求b不为0。因此0是任意整数的倍数（任意整数都是0的约数），但是0不能是约数。
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

