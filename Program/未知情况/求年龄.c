#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,age;
    printf("���������գ�");
    scanf("%d.%d.%d",&a,&b,&c);
    //printf("\��");
    //scanf("%d",&b);
    //printf("��");
    //scanf("%d",&c);
    //printf("��\n");
    printf("�������������ڣ�");
    scanf("%d.%d.%d",&d,&e,&f);
    //printf("��");
    //scanf("%d",&e);
    //printf("��");
    //scanf("%d",&f);
    //printf("��\n");
    //printf("������%d",(int)((f/365+e/12+d)-(c/365+b/12+a)));
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
