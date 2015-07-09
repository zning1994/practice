#include <iostream>
#include <cstdio>
#define MAX_SIZE 10011
using namespace std;
typedef struct
{
    int length;
    int array[MAX_SIZE];
}ARR_TYPE;
int input_arr(ARR_TYPE *arr)
{
    int i;
    scanf("%d",&arr->length);
    for(i=0;i<(arr->length);i++)
        scanf("%d",&arr->array[i]);
    return 0;
}
int output_arr(ARR_TYPE arr)
{
    int i;
    printf("%d",arr.array[0]);
    for(i=1;i<arr.length;i++)
        printf(" %d",arr.array[i]);
    return 0;
}
int main()
{
   ARR_TYPE arr;
   input_arr(&arr);
   output_arr(arr);
    return 0;
}
