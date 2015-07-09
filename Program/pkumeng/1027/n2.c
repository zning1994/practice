#include<stdio.h>
int main()
{
    int a[29],b[29],c[29];
    int i,j,d,e,f,sum1=0,sum2=0,sum3=0,k;
    double ave1,ave2,ave3;
    printf("欢迎使用萌妹纸学生成绩管理程序～喵～\n请输入三科成绩时用空格将其分开，谢谢！\n如学生数量不足30人，请输入三个-1\n");
        printf("=================================================\n");
    for(i=0; i<=29; i++)
    {
        printf("请输入学号为%d的学生的三科成绩:",i+1);
        scanf("%d%d%d",&d,&e,&f);
        if(d==-1&&e==-1&&f==-1)
            break;
        else
            a[i]=d,b[i]=e,c[i]=f;
    }
    printf("=================================================\n");
    printf("请输入学号：");
    scanf("%d",&j);
    if(j<=i)
        printf("学号为%d的学生成绩是：%d %d %d",j,a[j-1],b[j-1],c[j-1]);
    else
        printf("学号输入非法，请检查后重启程序");

    return 0;
}
