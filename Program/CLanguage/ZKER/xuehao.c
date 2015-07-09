#include<stdio.h>
int main()
{
    int a,b,c,d,e,ac;
    char x,y;
    ac=1;
    scanf("%d %c %c %d %d",&a,&x,&y,&b,&c);
    d=x-64;
    e=y-64;
    while(ac<=c)
    {
        printf("%d%.2d%.2d%.2d%.2d\n",a,d,e,b,ac);
        ac++;
    }
    return 0;

}
