#include<stdio.h>
int main()
{
    int a,b,c,f,g,i=1;
    char d,e;
    scanf("%d %c %c %d %d",&a,&d,&e,&b,&c);
    while(c>=i)
    {
        printf("%d%.2d%.2d%.2d%.2d\n",a,d-64,e-64,b,i);
        i++;
    }

    return 0;
}
