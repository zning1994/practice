#include<stdio.h>
#define MAX_SIZE 110
int getarray(int a[])
{
    int i=0;
    while(scanf("%d",&a[i])!=EOF)
    {
        i++;
    }
    return i;
}
int putarray(int a[], int n)
{
    int i;
    printf("%d",a[0]);
    for(i=1; i<n; i++)
        printf(" %d",a[i]);
    return 0;
}
int sortarray(int a[], int n)
{
    int i,j,temp;
    for(i=1; i<=n-1; i++)
        for(j=0; j<n-1; j++)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    return 0;
}
int main()
{
    int array[MAX_SIZE], size;

    size = getarray(array);
    sortarray(array, size);
    putarray(array, size);

    return 0;
}
