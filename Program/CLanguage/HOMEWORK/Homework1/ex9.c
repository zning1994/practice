#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%400==0)
        printf("Yes");
    else
        if(a%4==0)
            printf("Yes");
    else
        printf("No");
    return 0;


}