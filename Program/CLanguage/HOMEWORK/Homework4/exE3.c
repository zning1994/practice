#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    int d,e,g,h,i;
    char f;
    printf("\n此程序用于计算百钱买百鸡问题");
    do
    {
        i=0;
        printf("\n请输入想要用于购买的总钱数(为整数):");
        fflush(stdin);
        scanf("%d",&a);
        printf("\n请输入公鸡的价格:");
        scanf("%d",&b);
        printf("\n请输入母鸡的价格:");
        scanf("%d",&c);
        printf("\n请输入小鸡的价格:");
        scanf("%d",&d);
        for(e=0; e<=a/b; e++)
        {
            for(g=0; g<=a/c; g++)
            {
                for(h=0; h<=a/d; h++)
                {
                    if((e*b)+(g*c)+(h*d)==a)
                    {
                        printf("\n第 %d 种选择： %d 钱可买 %d只公鸡, %d只母鸡, %d只小鸡",i+1,a,e,g,h);
                        i++;
                    }
                }
            }
        }
        printf("\n\t\t一共有 %d 种选择",i);
        printf("\n\t是否继续?(y/n)");
        fflush(stdin);
        scanf("%c",&f);
    }
    while(f=='y'||f=='Y');
    printf("\n\t程序结束，按任意键关闭！\n");
    getch();
    return 0;
}
