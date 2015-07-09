#include<stdio.h>
#define MAX_SIZE 1010
int get_array(int a[])
{
    int i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    return n;
}
int put_array(int a[], int n)
{
    int i=0;
    if(n==0){
        printf("\n");return 0;}
    printf("%d",a[0]);
    for(i=1; i<n; i++)
        printf(" %d",a[i]);
    printf("\n");
    return i;
}
int reverse_array(int a[], int n)
{
    int i,c;
    for(i=0;i<n/2;i++)
    {
        c=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=c;
    }
    return n;
}
int main()
{
    int cases, i;
    int array[MAX_SIZE], size;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        size = get_array(array);
        reverse_array(array, size);
        printf("case %d:", i);
        put_array(array, size);
    }
    return 0;
}
