#include<stdio.h>
#define MAX_STR_LEN 1100
void print_graphic(int num)
{
    int i,j;
    for(i=0; i<num; i++)
    {
        for(j=0; j<num; j++)
            printf("*");
        printf("\n");
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    print_graphic(num);
    return 0;
}
