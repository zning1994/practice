#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a%100;
    c=b==0?a%400:a%4;
    c==0?printf("Yes"):printf("No");
    return 0;
}
