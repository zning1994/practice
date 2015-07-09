//#include<stdio.h>
//int main()
//{
//    int N,n,b,c,i,sum,count;
//    int a[65535];
//    count=1;
//    scanf("%d",&N);
//    n=N;
//    do
//    {
//        a[count++]=N%10;
//        N=N/10;
//    }
//    while(N!=0);
//    b=count;
//    sum+=a[count++];
//    //Start panduan
//    if(n%2==0)
//    {
//        for(i=0; i<=count; i++)
//        {
//            if(a[i]%2!=0)
//            {
//                printf("None");
//                break;
//            }
//            else if(sum%2!=0)
//            {
//                printf("None");
//                break;
//            }
//            else
//                break;
//        }
//            printf("Even");
//    }
//    else
//    {
//        for(i=0; i<=count; i++)
//        {
//            if(a[i]%2==0)
//            {
//                printf("None");
//                break;
//            }
//            else if(sum%2==0)
//            {
//                printf("None");
//                break;
//            }
//            else
//                break;
//        }
//            printf("Odd");
//    }
//    return 0;
//}
#include<stdio.h>
#define N 2000
int main()
{
    int a[N], k=0, i, n, j=0, sum=0;
    scanf("%d", &n);
    for ( i = 0;i < 10; i++)
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
        for (i = 0; i < j;i++)
         {
             if(a[i]%2 != 0)
                k++;
                sum+=a[i];
         }

         if (a[0]%2==0&&a[1]%2==0&&a[2]%2==0&&a[3]%2==0&&a[4]%2==0)
         {
             printf("Even");

         }


         else if (k == j && sum%2 != 0)
            printf("Odd");
        else printf("None");
}
