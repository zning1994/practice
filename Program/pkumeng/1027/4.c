#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,x[7],c=0,i;
    for(i=7; i!=0; i--)
    {
        scanf("%d",&a);
        if(a%2==0)
            x[c]=a-1;
        else
            x[c]=a+1;
        c++;
    }
    for(i=0,c=0; i<=7; i++)
    {
        printf("%d\n",x[c]);
        c++;
    }
    return 0;
}


