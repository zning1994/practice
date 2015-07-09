#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a%100;
    d=a%10;
    c=(a-(b*100)-d)/10;
    if(b*b*b+c*c*c+d*d*d==a)
        printf("YES");
    else
        printf("NO");
    return 0;
}
