#include<stdio.h>
int fun(int *x)
{
    *x=*x+1;
    return 0;
}
int main()
{
    int a;
    int *p;
    scanf("%d",&a);
    p=&a;
//    printf("%d\n",*p);
    fun(p);
        printf("%d\n",p);
    return 0;
}
