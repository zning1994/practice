#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[10];
    int age;
    char sex;
} INFO;
int main(int argc,char *argv[])
{
    FILE *rfp,*wfp;
    INFO stus[10];
    int i;
//    for (i=0;i<10;i++)
//    {
//        strcpy(stus[i].name,"zhang");
//        stus[i].age=19+i;
//        stus[i].sex='F';
//    }
//    rfp=fopen("a.dat","wb");
//    fwrite(stus,sizeof(INFO),10,rfp);
//    fclose(rfp);
    wfp=fopen("a.dat","rb");
    if (wfp==NULL){
        puts("fail");
        return 0;
    }
    fread(stus,sizeof(INFO),10,wfp);
    for (i=0;i<10;i++)
    {
        printf("%s,",stus[i].name);
        printf("%d,",stus[i].age);
        printf("%c\n",stus[i].sex);
    }
    fclose(wfp);
    return 0;
}
