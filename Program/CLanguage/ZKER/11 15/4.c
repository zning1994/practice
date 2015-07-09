#include <stdio.h>
#include <ctype.h>
int main()
{
    int left,right,len,i=0,a,flag;
    char str[80],ch;
    scanf("%d",&a);
    if (a<0){
        flag=1;
        a=-a;
    }
    else
        flag=0;
    while(a>0)
    {
        str[i]=a%10+'0';
        a/=10;
        i++;
    }
    if (flag==1)
        str[i++]='-';
    str[i]='\0';
    left=0;
    right=i-1;
    while (left<right)
    {
        ch=str[left];
        str[left]=str[right];
        str[right]=ch;
        left++;
        right--;
    }
    puts(str);
    return 0;
}
