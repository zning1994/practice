#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int i,a,b,n;
    int sum=100;
    while(sum)
    {
        int data;
        data=rand()%sum+1;
        sum-=data;
        printf("%d ",data);
    }

    return 0;
}
