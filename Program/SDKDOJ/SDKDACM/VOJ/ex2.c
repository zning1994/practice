#include<stdio.h>
int main()
{
    int a[15];
    int i,j,temp;
    for(i=0; i<10; i++)
        scanf("%d",&a[i]);
    for(i=1; i<=9; i++)
        for(j=0; j<9; j++)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    for(i=0; i<3; i++)
        printf("%d\n",a[9-i]);
    return 0;
}
