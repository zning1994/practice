#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char ss[25],pp[25];
    int i=0;
    scanf("%s",&ss);
    while(scanf("%s",&pp)!=EOF)
    {
        if((strcmp(ss,pp)==0)&&(i<5))
        {
            printf("Welcome!\n");
            break;
        }
        else if(i<5)
        {
            printf("Wrong!\n");
            i++;
        }
        else if(i==5)
            i++;
        if(i>5)
            printf("Out of limited!\n");
    }
    return 0;
}
