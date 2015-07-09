//函数与指针
//1、指针参数在函数中的应用
#include<stdio.h>
#include<string.h>
//本程序是计算好多数的和。
#include<stdlib.h>
int main(int argc,char *argv[])
{
    FILE *fp;
    int i,count;
    char filename[81],temp[90];
    count=atoi(argv[i]);
    for(i=1;i<count;i++)
    {
        //atoi将字符串变成整数
       strcpy(filename,"file");
       itoa(i,temp,10);
       strcat(filename,temp);
       strcat(filename,".txt");
       fp=fopen(filename,"w");
       fprintf(fp,"%d",i);
       fclose(fp);
    }
    return 0;
}
