#include<stdio.h>
int yamadie(char n)
{
    if(n>='A'&&n<='Z')
        return 1;
    else if(n>='a'&&n<='z')
        return 2;
    else if(n>='0'&&n<='9')
        return 3;
    else
        return 4;
}
int main()
{
    char a;
    scanf("%c",&a);
    if(yamadie(a)==1)
        printf("Big");
    else if(yamadie(a)==2)
        printf("Small");
    else if(yamadie(a)==3)
        printf("Number");
    else
        printf("Other");
    return 0;
}
