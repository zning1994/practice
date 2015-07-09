#include<stdio.h>
#define MAX_SIZE 1001
int get_array(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    return i;
}
int min_index(int a[], int n)
{
    int j,min,x=0;
    min=a[0];
    for(j=0; j<n; j++)
    {
        if(min>a[j])
        {
            min=a[j];
            x=j;
        }
    }
    return x;
}
int main()
{
    int array[MAX_SIZE], size, index,i;

    scanf("%d", &size);
    get_array(array, size);
    index = min_index(array, size);
    for(i=0;i<size;i++)
        printf("==%d,%d==\n",array[i],i);
    printf("minimum number is %d, whose position is %d.", array[index], index);
    return 0;
}
