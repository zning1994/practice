#include<stdio.h>
#define N 2000
int main()
{
    int a[N], k=0, i, n, j=0, sum=0;
    scanf("%d", &n);
    for ( i = 0; i < 10; i++)
    {
        if ( n / 10 == 0)
        {
            a[i] = n;
            j++;
            break;
        }
        else
        {
            a[i] = n % 10;
            n = n/10;
            j++;
        }
    }
//    for ( i = 0;i < j; i++)
//        printf("%d ",a[i]);
    for (i = 0; i < j; i++)
    {
        if(a[i]%2 != 0)
            k++;
        sum+=a[i];
    }
    if (a[0]%2==0&&a[1]%2==0&&a[2]%2==0&&a[3]%2==0&&a[4]%2==0) printf("Even");
    else if (k == j && sum%2 != 0) printf("Odd");
    else printf("None");
}
