#include<stdio.h>
#define MAX_SIZE 10101
int N;
typedef struct
{
    int length;
    int array[MAX_SIZE];
}ARR_TYPE;
int input_arr(ARR_TYPE *arr)
{
    int i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&(arr->array[i]));
    }
    return 0;
}
int output_arr(ARR_TYPE arr)
{
    int i;
    printf("%d",arr.array[0]);
    for(i=1;i<N;i++)
    {
        printf(" %d",arr.array[i]);
    }
    printf("\n");
    return 0;
}
int main()
{
   ARR_TYPE arr;
   input_arr(&arr);
   output_arr(arr);
    return 0;
}
