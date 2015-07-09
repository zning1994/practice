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
    printf("%d",a[0]);
    for(i=1; i<n; i++)
        printf(",%d",a[i]);
    printf("\n");
    return i;
}
int max_value(int a[], int n)
{
    int j,max,x=0;
    max=a[0];
    for(j=0; j<n; j++)
    {
        if(max<a[j])
        {
            max=a[j];
            x=j;
        }
    }
    return max;
}
int max_index(int idx[], int a[], int n)
{
    int s=0,k;
    int j,max,x=0;
    max=a[0];
    for(j=0; j<n; j++)
    {
        if(max<a[j])
        {
            max=a[j];
            x=j;
        }
    }
    for(j=0,k=0; j<n; j++)
        if(max==a[j])
        {
            idx[k]=j;
            k++,s++;
        }
    return s;
}
int main()
{
    int array[MAX_SIZE], size;
    int index[MAX_SIZE], idx_size;

    size = get_array(array);
    idx_size = max_index(index, array, size);
    printf("maximum number is %d, ", max_value(array, size));
    printf("whose positions are:");
    put_array(index, idx_size);

    return 0;
}
