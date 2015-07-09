#include <stdio.h>
int main()
{
    int a=0x7fffffff;
    int b=0x80000000;
    a=a+1;
    b=b-1;
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}
