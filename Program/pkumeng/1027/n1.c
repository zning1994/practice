#include<stdio.h>
int main()
{
    int a[29],b[29],c[29];
    int i,j,d,e,f,sum1=0,sum2=0,sum3=0,k;
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
    for(j=0;j<=i-1;j++)
    {
        printf("学号为%d的学生的总分是:%d，平均分是：%d\n",j+1,a[j]+b[j]+c[j],(a[j]+b[j]+c[j]/3));
    }
    for(k=0;k<=i-1;k++)
    {
        sum1+=a[k];
        sum2+=b[k];
        sum3+=c[k];
    }
    printf("全班同学共计%d人\n",i);
    return 0;
}
