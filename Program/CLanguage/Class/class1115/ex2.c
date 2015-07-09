#include<stdio.h>
int main()
{
    int a[10]={1,3,5,7,9},i;
    int data,pos=0;
    scanf("%d",&data);
    while(pos<5)
    {
        if(a[pos]>data)
            break;
        pos++;
    }
    printf("%d\n",pos);
    for(i=4;i>=pos;i--)
        a[i+1]=a[i];
    a[pos]=data;
    for(i=0;i<6;i++);
    {
        printf("%3d",a[i]);
    }
    return 0;
}
