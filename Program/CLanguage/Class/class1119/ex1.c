#include<stdio.h>
int swap(int x, int y)
{
    int t;
    printf("In subfun, before swap: ");
    printf("x=%d,y=%d\n",x,y);
        t=x,x=y,y=t;
    printf("In subfun, after swap: ");
    printf("x=%d,y=%d\n",x,y);
    return 0;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("In mainfun, before swap: ");
    printf("a=%d,b=%d\n",a,b);
    swap(a,b);
    printf("In mainfun, after swap: ");
    printf("a=%d,b=%d\n",a,b);
    printf("");
    return 0;
}
