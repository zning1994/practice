#include<stdio.h>
int main ()
{
    char ch;
    printf("please input an character:");
    scanf ("%c",&ch);
    ch>=65&&ch<=90?printf ("upper"):ch>=97&&ch<=122?printf ("lower"):printf ("others");
    return 0;
}
