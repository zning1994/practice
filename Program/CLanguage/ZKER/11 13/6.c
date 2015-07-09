#include <stdio.h>
#include <string.h>
int main()
{
    char str[80];
    int i,len;
    int left,right,t;
    char c;
    gets(str);
    len=strlen(str);
    left=0;
    right=len-1;
    while(left<right)
    {
        t=str[left];
        str[left]=str[right];
        str[right]=t;
        left++;
        right--;
    }
    puts(str);
    //while (left<right)

    return 0;
}





