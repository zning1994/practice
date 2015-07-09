#include<stdio.h>
int main()
{
    int a,b,c,i;
    i=1;
    scanf("%d",&a);
    while(scanf("%d",&b)!=EOF)
    {
        if(b>a)
        {
            i=1;
            a=b;
        }
        else if(b==a)
            i++;

    }printf("maximum data is %d, whose occurences is %d.\n",a,i);
    return 0;
}
