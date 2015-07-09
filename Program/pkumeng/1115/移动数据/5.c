#include<stdio.h>
void reversal(char str[], int length)         //反转
{
    int i;
    for(i=0; i<length/2; i++)
    {
        char temp = str[i];
        str[i] = str[length-i-1];
        str[length-i-1] = temp;
    }
}
void itos(int n, char str[], int i)                 //递归
{
    if(n==0)
    {
        str[i] = '\0';
        reversal(str,i);
        return;
    }
    str[i++] = n%10+48;
    itos(n/10,str,i);
}
int main(void)
{
    int n, i = 0;
    char str[100];
    printf("输入一个整数：");
    scanf("%d",&n);
    itos(n,str,i);
    printf("转化为字符串输出：");
    printf("%s\n",str);
    return 0;
}
