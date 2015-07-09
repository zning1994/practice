#include<stdio.h>
#include"string.h"
int main()
{
    char z,x;
    scanf("%c",&z);
    if (z>='a'&&z<='z')
        x=(z+'A'-'a');
    else
        x=(z+'a'-'A');
    printf("%c\n",x);
    return 0;
}
