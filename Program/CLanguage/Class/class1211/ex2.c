//������ָ��
//1��ָ������ں����е�Ӧ��
#include<stdio.h>
#include<string.h>
//�������Ǽ���ö����ĺ͡�
#include<stdlib.h>
int main(int argc,char *argv[])
{
    FILE *fp;
    int i,count;
    char filename[81],temp[90];
    count=atoi(argv[i]);
    for(i=1;i<count;i++)
    {
        //atoi���ַ����������
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
