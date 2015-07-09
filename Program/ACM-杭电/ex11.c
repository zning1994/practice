#include<stdio.h>
int main()
{
    char a1;
    scanf("%c",&a1);
    printf(a1>=65&&a1<=90?"Upper":(a1>=97&&a1<=122?"Lower":(a1>=49&&a1<=57?"Num":"Others")));
    return 0;
}
