//函数与指针
//1、指针参数在函数中的应用
#include<stdio.h>
//argc记录命令行参数的个数
//argv是每一个命令行参数是什么
//作用：垃圾网站进行快捷方式劫持，目标窗口加的就是命令行参数。
//本程序是计算好多数的和。
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int i,sum=0;
    for(i=1;i<argc;i++)
    {
        //atoi将字符串变成整数
       sum+=atoi(argv[i]);
    }
    printf("%d",sum);
    return 0;
}
