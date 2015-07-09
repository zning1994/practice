#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf(a%400==0?"Yes":(a%4==0&&a%100!=0?"Yes":"No"));
/*    if(a%400==0)
        printf("Yes");
    else
        if(a%4==0)
            printf("Yes");
    else
        printf("No");
        */

    return 0;


}
