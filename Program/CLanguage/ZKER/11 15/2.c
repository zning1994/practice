#include <stdio.h>
#include <ctype.h>
int main()
{
    int a[10]={1,3,5,7,9};
    int data,pos,i;
    pos=0;
    scanf("%d",&data);
    while (pos<5)
    {
        if (a[pos]>data)
            break;
        pos++;
    }
    for (i=4;i>=pos;i--)
        a[i+1]=a[i];
    a[pos]=data;
    for (i=0;i<6;i++)
        printf("%3d",a[i]);
    return 0;
}
