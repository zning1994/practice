#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    freopen("input","w",stdout);
    char input[]="nichidai.txt";
    srand(time(NULL));
    int i,a,b,n,x;
    n=rand()%30;
    for(x=1;x<=9;x++)
    {


    for(i=0;i<30;i++)
    {
        a=rand()%1000;
        b=rand()%1000;
        printf("%d %d\n",a,b);
    }

    return 0;
}}
