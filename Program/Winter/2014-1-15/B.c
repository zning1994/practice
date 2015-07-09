#include<stdio.h>
#include<math.h>
#include<stdlib.h>
char strnum[100];
int count=0;
void reverse()
{
    int i;
    char tmp;
    for(i=0; i<count/2; i++)
    {
        tmp=strnum[count-i-1];
        strnum[count-i-1]=strnum[i];
        strnum[i]=tmp;
    }
}
int main()
{
    int value;
    scanf("%d",&value);
    if(value==0)
    {
        printf("0");
        return 0;
    }
    while(value!=1)
    {
        if(abs(value)%2!=0)
        {
            strnum[count++]='1';
            value=(value-1)/(-2);
        }
        else
        {
            strnum[count++]='0';
            value=value/(-2);
        }
    }
    reverse();
    strnum[count]='\0';
    printf("1%s",strnum);
    return 0;
}
