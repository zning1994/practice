#include<stdio.h>
#include<string.h>
#define N 50000
void reverse(char str[])
{
    char temp;
    int m=0,true=0,left=0,right;
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
}
int main()
{
    char str1[N],ch;
    int kk;
    scanf("%s",str1);
    reverse(str1);
    return 0;
}
