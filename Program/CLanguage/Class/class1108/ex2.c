#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 10000
int main()
{
    int n,i=0,sum=0,j=0,k=0;
    scanf("%d",&n);
    int a[n],b,c;
    srand(time(NULL));
    printf("====================================================\n");
    for(i=0; i<n; i++)
    {
        a[i]=rand()%100;
        printf("****************************************************\n");
        printf("%d\n",rand());
        printf("****************************************************\n");
        sum+=a[i];
        if(a[i]%2==0)
        {
            printf("The %d is Even.\n%>_<%\n",a[i]);
            j++;
            printf("====================================================\n");
        }
        else
        {
            printf("The %d is Odd.\nO(กษ_กษ)O~\n",a[i]);
            k++;
            printf("====================================================\n");
        }
    }
    printf("====================================================\n");
    printf("These added is %d.\n~~~~(>_<)~~~~ \n",sum);
    printf("There are have %080d Evens, %d Odds.\n",j,k);
    return 0;
}
