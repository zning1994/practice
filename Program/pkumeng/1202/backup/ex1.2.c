#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<malloc.h>
void swap(int *a,int *b)
{
    int swap;
    swap=*a;
    *a=*b;
    *b=swap;
}
void array(int *arr,int n)
{
    int i=0,j=0;
    //随机赋值
    srand(time(NULL));
    for(i=0;i<n;i++)
    {
        arr[i]=rand()%100;
    }
    //冒泡排序
    for(i=0;i<n;i++)
        for(j=1;j<n-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(&arr[j],&arr[j+1]);
        }
    }
}
int main()
{
    int n=0;
    int *arr=NULL;
    printf("Please enter the lenth of array: ");
    scanf("%d",&n);
    arr=(int *)malloc(sizeof(int)*n);
    array(arr,n);
    //输出结果
    int i,j;
    for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
    free(arr);
    return 0;
}
