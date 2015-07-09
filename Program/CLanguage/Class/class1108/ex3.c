#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 10000
int main()
{
    int n,i=0,s=0;
    scanf("%d",&n);
    srand(time(NULL));
    int a[n],b,c;
    while(i<=n-1)
    {

        a[i]=rand()%10;
        printf("%d\n",a[i]);
//        sum+=a[i];
        i++;
    }
    i=0;
    scanf("%d",&b);
    while(i<=n-1)
    {

        if(b==a[i])
        {
            printf("%d ",i+1);
            printf("t");
            s++;
        }
//        sum+=a[i];
        i++;
        if(s==0)
        {
            printf("Not Found.\n");
            break;
        }
    }

    return 0;
}
