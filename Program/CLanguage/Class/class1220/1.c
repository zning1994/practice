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
    int i,count;
    char fileName[80],str[10];
    INFO zhang= {"zhang",19,'F'};
    rfp=fopen(argv[1],"r");
    if (rfp==NULL)
        return 1;
    count=atoi(argv[2]);
    for (i=1; i<=count; i++)
    {
        strcpy(fileName,argv[3]);
        itoa(i,str,10);
        strcat(fileName,str);
        strcat(fileName,".txt");
        wfp=fopen(fileName,"w");
        if (wfp==NULL)
        {
            puts("file cannot be opened!");
            return 0;
        }

        fscanf(rfp,"message:%s %d %c",zhang.name,&zhang.age,&zhang.sex);
        fprintf(wfp,"message:%s %d %c",zhang.name,zhang.age,zhang.sex);
        fclose(wfp);
        rewind(rfp);
    }
    fclose(rfp);
    return 0;
}
