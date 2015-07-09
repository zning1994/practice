#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,age;
    printf("请输入生日：");
    scanf("%d.%d.%d",&a,&b,&c);
    //printf("\年");
    //scanf("%d",&b);
    //printf("月");
    //scanf("%d",&c);
    //printf("日\n");
    printf("请输入现在日期：");
    scanf("%d.%d.%d",&d,&e,&f);
    //printf("年");
    //scanf("%d",&e);
    //printf("月");
    //scanf("%d",&f);
    //printf("日\n");
    //printf("年龄是%d",(int)((f/365+e/12+d)-(c/365+b/12+a)));
	age=d-a;
	if (b>e)
		printf("%d",age-1);
	else
		if(b=e)
			if(c>f)
				printf("%d",age-1);
			else
				printf("%d",age);
		else
			printf("%d",age);
    return 0;
}
