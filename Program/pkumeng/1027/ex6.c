#include<stdio.h>
#include<stdlib.h>
#define N 100000
int main()
{
    long int x,c,j,i;
    long int a[N];
    scanf("%ld",&x);
    if(x==0)
        printf("0\n");
    else
    {
        c=0;
        for(i=x; (i/2!=0)||(i==1); i=i/2)
        {
            a[c]=i%2;
            c++;
        }
        for(j=c-1; j>0; j--)
        {
            printf("%ld",a[j]);
        }
        printf("%ld\n",a[0]);
    }
    return 0;
}
