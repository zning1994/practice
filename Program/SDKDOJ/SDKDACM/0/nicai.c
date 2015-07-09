#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    //Î±Ëæ»úÊı
    srand(time(NULL));
    int n=rand()%100;
    printf("%d",n);
    return 0;
}
