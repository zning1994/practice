#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("daqian.txt","w");
    if(fp=NULL)
    {
        puts("File cannot be opened!");
        return 0;
    }
    fscanf(fp,"This is a daqianyamaidie.");
    fprintf(fp,"This is a daqianyamaidie.");
    fclose(fp);
    return 0;
}
