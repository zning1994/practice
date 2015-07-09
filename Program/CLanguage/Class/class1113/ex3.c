#include<stdio.h>
#include<string.h>//Using strlrn strcpy strcat strcmp
#define N 200000
int main()
{
    char str[N],temp;
    int m=0,true=0,left=0,right;
    scanf("%s",str);
    right=strlen(str)-1;
    while(m<=strlen(str)/2)
    {
        temp=str[left];
        //printf("%c",temp);
        str[left]=str[right];
        str[right]=temp;
        left++,right--;
        m++;
    }
    printf("%s",str);
    return 0;
}
